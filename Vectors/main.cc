
#include "hermes.h"
int main(){
    BenjaInt number;
    benjaArray v1 {};
    BenjaOut("Enter The number");
    cin>>number;
    v1.push_back(number);
    BenjaOut(v1.front());
    BenjaOut(4);
    return 0;
}