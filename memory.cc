#include<iostream>
using namespace std;
int main(){

    int* p =new int(45);
    delete p;
    cout<<*p;
    return 0;
}