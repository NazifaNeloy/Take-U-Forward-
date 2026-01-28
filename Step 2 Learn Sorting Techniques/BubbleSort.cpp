#include<iostream>
using namespace std;

void swap(int &x, int &y){
  int temp = x;
  x= y;
  y= temp;
}

void bubble_sort(int a[], int n){
  for (int i = 0; i < n-1; i++){
    for (int j = i+1; j < n; j++){
      if(a[i] > a[j]){
        swap(a[i], a[j]);
      }
    }
  }
}


int main(){
  int a[] = {2,3,5,1,9,8,7,6,4};
  // int n = 9;
  int n = sizeof(a)/ sizeof(a[0]);
  bubble_sort(a, n);
  for(int ele: a){
    cout<< ele<< " ";
  }
  return 0;
}