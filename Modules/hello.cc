#include<iostream>
#include "factorial.h"
#include "swap.h"

using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter The Number One:"<<endl;
    cin>>num1;
    cout<<"Enter The Number Two:"<<endl;
    cin>>num2;
    int x=factorial(num2);
    cout<<x<<endl;
    swap(&num1,&num2);
    cout<<num1<<"\n"<<num2<<endl;
    return 0;
}