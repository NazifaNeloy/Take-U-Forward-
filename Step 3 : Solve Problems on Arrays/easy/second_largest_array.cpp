//optimal approach 

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int> &a, int n) {
    int largestnumber=a[0];
    int secondLargest=-1;
    for(int i=1;i<n;i++){
        if(a[i]>largestnumber){
            secondLargest=largestnumber;
            largestnumber=a[i];
        }
        else if(a[i]<largestnumber && a[i]>secondLargest){
            secondLargest=a[i];
        }
    }
    return secondLargest;
}
int secondsmallest(vector<int> &a, int n) {
    int smallestnumber=a[0];
    int secondsmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallestnumber){
            secondsmallest=smallestnumber;
            smallestnumber=a[i];
        }
        else if(a[i]>smallestnumber && a[i]<secondsmallest){
            secondsmallest=a[i];
        }
    }
    return secondsmallest;
}
     
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cout<<"enter the elemenets of array "<<i+1<<":";
        cin>>a[i];
    }
    int result_2= secondLargest(a,n);
    cout<<"The second largest element in the array is: "<<result_2<<endl;
    return 0;
}


/*
//better approach 
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


int secondLargest(vector<int> &a, int n) {
     int result_1 =largestnumber(a ,n);

  cout<<"largest element is : "<<result_1 <<endl;
    int largest = result_1;
    int secondLargest = -1;
    for(int i=n-2;i>0;i--){
        if(a[i] > secondLargest && a[i]!=largest){
            secondLargest = a[i];

        }
    }
    return secondLargest;
}


int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cout<<"enter the elemenets of array "<<i+1<<":";
        cin>>a[i];
    }
    int result_2= secondLargest(a,n);
    cout<<"The second largest element in the array is: "<<result_2<<endl;
    return 0;
}


//brute force approach

#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int> &a, int n) {
    int largest = a[n-1];
    int secondLargest = -1;
    for(int i=n-2;i>0;i--){
        if(a[i]!=largest){
            secondLargest = a[i];

        }
    }
    return secondLargest;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cout<<"enter the elemenets of array "<<i+1<<":";
        cin>>a[i];
    }
    int result = secondLargest(a,n);
    cout<<"The second largest element in the array is: "<<result<<endl;
    return 0;
}
    
*/

