//brute force approach 

#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;         
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];  
    }

    set<int> st;       // store unique elements
    for (int i = 0; i < n; i++) {
        st.insert(a[i]);
    }

    int index = 0;
    for (auto it : st) {   // copy back unique elements into the array
        a[index] = it;
        index++;
    }

    for (int i = 0; i < index; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
