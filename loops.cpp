#include<iostream>

int main(){
    int num[5]={1,3,6,7,8};

    for (int i:num){
        std::cout<<i<<std::endl;
    }
}