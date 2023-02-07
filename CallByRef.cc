#include<iostream>

using namespace std;
//swapping two values using call by reference
void swap(int* x, int* y) {
  int swap;
  swap=*x;
  *x=*y;
  *y=swap;
}
int main(){
    int p=10;
    int t=55;
    swap(&p,&t);
    cout<<p<<endl;
    cout<<t<<endl;
    return 0;
}