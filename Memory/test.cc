#include<iostream>
using namespace std;

int main(){
    typedef float dec;
    int* p;
    int i,n;
    dec b;
    cout<<"Enter the number of element to enter"<<endl;
    cin>>i;
    p=new (nothrow) int[i];

    if(p==nullptr){
        cout<<"An error occurred in memory allocation"<<endl;
    }
     else
  {
    for (n=0; n<i; n++)
    {
      cout << "Enter number: ";
      cin >> p[n];
    }
    cout << "You have entered: ";
    for (n=0; n<i; n++)
      cout << p[n] << ", ";
    delete[] p;
    cout<<*p;
  }
    return 0;
}