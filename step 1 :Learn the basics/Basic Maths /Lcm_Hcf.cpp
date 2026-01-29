#include <iostream>
using namespace std;

// Function to find HCF (GCD)
int hcf(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

// Function to find LCM
int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "HCF = " << hcf(a, b) << endl;
    cout << "LCM = " << lcm(a, b) << endl;

    return 0;
}
