
#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
      int id;
      string name;
      int age;

      void insert(int id, string name, int age){
        id=id;
        name=name;
        age=age;
      }

      void display(){
        cout<<name<<" "<<age<<endl;
      }

};

