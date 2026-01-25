#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int> &a, int n) {
    int largest = a(n-1);
    for(int i=n-2;i>0;i--){
        if(a[i]!=largest){
            int secondLargest = a[i];

        }
    }
    return secondLargest;
}

int main(){
    int n;
    cout<,"Enter the number of elements in the array: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<,"enter the elemenets pf array "<<i+1<<":";
        cin>>a[i];
    }
    int result = secondLargest(a,n);
    cout<<"The second largest element in the array is: "<<result<<endl;
    return 0;
}