#include<iostream>
using namespace std;
class Address{
    public:
      string city,state,zip;
    Address(string city,string state,string zip){
        this->city = city;
        this->state = state;
        this->zip = zip;
    }
};
//employee class
class Employee{
    private:
       Address* address;
    public:
      string name;
      int amount;
    Employee(string name,int amount,Address* address){
        this->name = name;
        this->amount = amount;
        this->address = address;
    }
    //destroy employee
    ~Employee(){
        cout<<"Object destroyed"<<endl;
    }
    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"amount: "<<amount<<endl;
        cout<<"address: "<<address->city<<endl;
    }
};

int main(){
    Address a1=Address("Kampala","muk","8899");
    Employee a2=Employee("Jjumba",5000000,&a1);
    a2.display();
    return 0;
}