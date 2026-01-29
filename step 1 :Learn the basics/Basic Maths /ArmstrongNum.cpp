#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int temp= n;
    int sum = 0;

    while(temp> 0){
        int last_digit = temp % 10;
       sum= sum+ pow(last_digit, 3);
        temp= temp / 10; 
        sum = sum+temp;
    }

  cout<<sum;
    return 0;
}

/*
We initialize temp with n because during digit-based operations we modify the number by repeatedly dividing it by 10, and this destroys its original value. When we extract digits using % 10 and then do n = n / 10, the value of n keeps shrinking and eventually becomes 0. If we later need the original number—for example, to compare it with the sum of cubes of its digits (as in an Armstrong number check) or with its reverse—then we no longer have it. By storing n in temp, we keep the original number safe and unchanged, while temp acts as a working copy that we are free to modify inside the loop. This separation allows us to both process the digits and still use the original value for comparison or output.
*/