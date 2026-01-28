#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& a, int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && a[j - 1] > a[j]) {
            int temp = a[j - 1];
            a[j - 1] = a[j];
            a[j] = temp;
            j--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    insertion_sort(a, n);

    for (int ele : a) {
        cout << ele << " ";
    }
    return 0;
}
