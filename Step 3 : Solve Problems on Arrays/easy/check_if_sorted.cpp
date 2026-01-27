#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 5, 3, 7, 2};

    for (int i = 1; i < 5; i++) {
        if (a[i] >= a[i - 1]) {
            cout << i << ", ";
        } else {
            return false;
        }
    }

    return 0;
}
