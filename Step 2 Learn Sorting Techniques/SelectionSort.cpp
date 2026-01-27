#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(vector<int>& a, int n) {
    for (int i = 0; i < n - 1; i++) {
        int mini = a[i];
        int idx = i; // reset index for each i
        for (int j = i + 1; j < n; j++) { // j = i+1 is enough
            if (a[j] < mini) {
                mini = a[j];
                idx = j;
            }
        }
        swap(a[i], a[idx]);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    selection_sort(a, n);

    for (int ele : a) {
        cout << ele << " ";
    }
    return 0;
}
