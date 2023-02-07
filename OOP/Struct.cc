#include<iostream>
using namespace std;
struct Rectangle{
    int length,width;
   Rectangle(int l,int w){
      length=l;
      width=w;
   }

   void AreaOfRectangle(){
       cout<<"Area is=>" <<(length*width);
   }
};
int main(){
   struct Rectangle rec=Rectangle(23,78);
   rec.AreaOfRectangle();
    return 0;
}