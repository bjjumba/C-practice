#include<iostream>
using namespace std;
int main(){
    //void* points to any object in the
    //nullptr points to no object
     char m='a';
     char* p=&m;
     //cout<<*p;
     float v=static_cast<float>(m);
     cout<<v;
    return 0;
}