#include<iostream>
using namespace std;

//declaring classes
class Base{
    int b;
    int c;
    char* u;
};
void test(){
    float y=4.7;
    cout << y <<endl;
}
int main(){
    cout<<sizeof(Base)<<endl;
    return 0;
}