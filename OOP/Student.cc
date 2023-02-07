#include<iostream>
using namespace std;
class Student{
  public:
     int id;
     string name;
     int age;
//constructor
     Student(int i, string n, int a){
        id=i;
        name=n;
        age=a;
     }
     //methods
     void display(){
        cout<<id<<" "<<name<<" "<<age<<endl;
     }
     //garbage collector
     ~Student(){
        cout<<"Object Destructed"<<endl;
     }
};
int main(){
   Student s1=Student(1,"ggdggg",89);
  
   s1.display();

   return 0;
}