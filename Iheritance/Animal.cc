#include<iostream>
using namespace std;
class Animal{
    public:
      int height;
      int name;

    void eat(){
       cout<<"All animals eat"<<endl;
    }
};
//inheriting class
class Dog : public Animal{
      public:
        void bark(){
            cout<<"All dogs  bark"<<endl;
        }
};
//Multiple inheritance class
class Puppy : public Dog,public Animal{
    public:
    void status(){
        cout<<"I am a young Dog"<<endl;
    }
};
int main(){
    Dog k;
    k.eat();
    Puppy robin;
     robin.Dog::eat();
 return 0;
}