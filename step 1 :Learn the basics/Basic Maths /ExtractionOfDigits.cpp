#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n>0){
        int last_digit = n%10;
        cout<<last_digit<<endl;
        n=n/10; 
    }
    return 0;
}

/*

//count digits 

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count =0;
    while(n>0){
        int last_digit = n%10;
       count = count +1;
        n=n/10; 
    }

    cout<<count;
    return 0;
}

*/