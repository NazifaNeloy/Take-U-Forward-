#include <iostream>
#include <math.h>
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


// or 

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count =(int) (log10(n)+1);
    while(n>0){
        int last_digit = n%10;
        n=n/10; 
    }

    cout<<count;
    return 0;
}
*/