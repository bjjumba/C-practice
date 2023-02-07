#include<iostream>
using namespace std;
int main(){
    int* ptr[5];
    int b[5]={1,2,3,4,5};

    for(int i=0;i<5;i++){
        ptr[i]=&b[i];
    }
    // void* voidPointer;
    // float e=56;
    // voidPointer=&e;
    // int a=8;
    // ptr[0]=&a;
    cout<<*(ptr[0])+1<<endl;
}