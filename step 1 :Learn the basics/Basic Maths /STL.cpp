// STL : Standard Template Library
// Types :
// 1. Containers
// 2. Algorithms
// 3. Iterators
// 4. Functors

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

// Pair
pair<int, int> p;

// VECTOR 
void vect() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<vector<int>> v2(3, vector<int>(3, 5));

    v1.push_back(6);

    cout << "v1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    auto it = v1.begin();
    it++;
    cout << *it << endl;

    v1.erase(v1.begin() + 4);

    cout << "v1 after erase: ";
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    cout << "v2:\n";
    for (auto i : v2) {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
}

//  LIST 
void list_example() {
    list<int> li;
    li.push_back(3);
    li.push_back(2);
    li.push_front(1);
    li.push_front(0);
}

// DEQUE
void deque_example() {
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    d.pop_back();
    d.pop_front();
}

// STACK
void stack_example() {
    stack<int> st;
    st.push(44);
    st.top();
    st.pop();
}

// QUEUE 
void queue_example() {
    queue<int> q;
    q.push(10);
    q.front();
    q.back();
    q.pop();
}

//  PRIORITY QUEUE 
void priority_queue_example() {
    priority_queue<int> pq; // Max Heap
    pq.push(10);
    pq.push(5);
    pq.top();
    pq.pop();

    priority_queue<int, vector<int>, greater<int>> minheap; // Min Heap
    minheap.push(3);
    minheap.push(1);
    minheap.top();
}

// SET 
void set_example() {
    set<int> st;
    st.insert(22);
    st.insert(21);
    st.insert(23);
    st.insert(24);

    st.count(22);

    auto it1 = st.find(21);
    auto it2 = st.find(23);
    st.erase(it1, it2);

    st.clear();
}

//UNORDERED SET 
void unordered_set_example() {
    unordered_set<int> s;
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(2);
}

// MAP 
void map_example() {
    map<int, int> mp;
    mp[1] = 3;
    mp.emplace(3, 8);
    mp.insert({4, 2});
}

// UNORDERED MAP 
void unordered_map_example() {
    unordered_map<int, int> mp;
    mp.insert({2, 3});
}

//  CUSTOM COMPARATOR 
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second != p2.second)
        return p1.second < p2.second;
    return p1.first > p2.first;
}

// ALGORITHMS 
void algo() {
    int n = 7;
    cout << __builtin_popcount(n) << endl;

    string s = "123";
    next_permutation(s.begin(), s.end());
    cout << s << endl;
}


int main() {
    vect();
    list_example();
    deque_example();
    stack_example();
    queue_example();
    priority_queue_example();
    set_example();
    unordered_set_example();
    map_example();
    unordered_map_example();
    algo();
