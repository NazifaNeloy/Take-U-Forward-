#include <iostream>
using namespace std;

void print(int count, int &sum){
    if(count==10) return;
    cout << count << " ";
    sum += count;
    print(count + 1, sum);
}

int main() {
    int sum = 0;
    print(1, sum);
    cout << "\nThe Sum is: " << sum;
    return 0;
}
