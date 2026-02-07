#include<iostream>
using namespace std;

void print(int count){
    if(count == 0) return;
    cout << count << " ";
    print(count - 1);
}

int main(){
    print(10);
    return 0;
}
