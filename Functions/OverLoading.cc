#include<iostream>
using namespace std;
//function overloading
//function 1
int square(int x){
    return x*x;
}
//function 2
double square(double x){
    return x*x;
}

int main(){
     cout<<"Enter Number to Square"<<endl;
     float n;
     cin>>n;
     cout<<square(n);
    return 0;
}