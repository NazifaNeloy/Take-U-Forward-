#include<iostream>
using namespace std;

void print(int count){
  if(count == 11) return;
  cout << count << " ";
  print(count + 1);
}

int main(){
  print(1);
  return 0;
}
