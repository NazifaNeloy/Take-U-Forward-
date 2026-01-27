#include<iostream>
using namespace std;
#define Size 100

void merge(int arr[],int low, int mid, int high){
  int i,j,k;
  i = low;
  j = mid+1;
  k = low;
  int brr[Size];
  while(i<=mid && j<=high){
    if(arr[i] < arr[j]){
      brr[k++] = arr[i++];
    }
    else{
      brr[k++] = arr[j++];
    }
  }
  
  while(i<=mid){
    brr[k++] = arr[i++];
  }
  
  while(j<= high){
    brr[k++] = arr[j++];
  }

  for(int i=low; i<=high; i++){
    arr[i] = brr[i];
  }
}

void merge_sort(int arr[], int low, int high){
  if(low<high){
    int mid = low + (high-low)/2;

    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);

    merge(arr, low, mid, high);
  }
}


int main(){
  int arr[] = {2,44,22,3,5,1,9,8,7,6,4};
  int n = sizeof(arr)/ sizeof(arr[0]);
  merge_sort(arr, 0, n-1);
  for(int ele: arr){
    cout<< ele<< " ";
  }
}