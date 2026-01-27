#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the element of the array: ";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
     cout << "Enter Number " << i + 1 << " : ";
        cin>>a[i];
    }

    int largest =a[0];
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            largest =a[i];
        }
    }
        cout<<"largest element is :  "<<largest <<endl;
    return 0;
}

/*
//functional programming approach

#include <iostream>
#include <vector>
using namespace std;

int largestnumber(vector<int>a , int n){
int largest = a[0];
for(int i=1;i<n;i++){
if(a[i]>largest){
largest =a[i];
}
}
return largest;
}

int main(){
    int n;
    cout<<"enter the element of the array: ";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
     cout << "Enter Number " << i + 1 << " : ";
        cin>>a[i];
    }
    int result =largestnumber(a ,n);
    
  cout<<"largest element is : "<<result <<endl;  
  return 0;
}


//logical in online compiler 

#include <bits/stdc++.h>

int largestnumber(vector<int> & a,int n){
int largest = a[0];
for(int i=1;i<n;i++){
if(a[i]>largest){
largest =a[i];
}
}
return largest;
}

*/