#include<iostream>
using namespace std;

void divisors(int n ){

    for(int i=1;i<n;i++){
        if(n%i){
            cout<<i<<" ";
        }
    }
    
}

int main(){

    int n ;
    cin>>n;
   divisors(n);
    return 0;
}