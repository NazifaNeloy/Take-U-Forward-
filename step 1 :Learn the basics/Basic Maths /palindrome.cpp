#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int rev_num = 0;
    int original = n;

    while(n > 0){
        int last_digit = n % 10;
        rev_num = (rev_num * 10) + last_digit;
        n = n / 10; 
    }

    if(original == rev_num){
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}


/*

//return true / false 

#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int original = n, rev = 0;

    while(n > 0){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return original == rev;
}

int main(){
    int n;
    cin >> n;

    if(isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

*/