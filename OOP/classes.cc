#include<iostream>
using namespace std;
class Rectangle{
     int height,length;

     public:
        void set_Values(int,int);
        int area(){return height*length;}
};
//defining functions
void Rectangle::set_Values(int x,int y){
    height = x;
    length = y;
}
int main(){
   Rectangle r;
   r.set_Values(4,8);
cout<<"area"<<r.area()<<endl;
return 0;
}