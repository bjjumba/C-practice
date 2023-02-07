#include <iostream>
using namespace std;

int main(){
    int age {0};
    back:
    cout<<"Enter Your age"<<endl;
    cin>>age;

    if(age<18){
        cout<<"Enter You are underage";
        goto back;
    }
    else{
       cout<<"Enter You are an adult"; 
    }
}