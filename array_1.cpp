// largest element in an array

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
        cin>>a[i];
    }

    int largest =a[0];
    for(int i=1;i<n;i++){
        if(a[i]>largest){
            largest =a[i];
        }
    }
        cout<<"largest element is :  "<<largest <<endl;
    
}