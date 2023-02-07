#include<iostream>
#include<fstream>

using namespace std;

int main(){

    cout<<"const x=9"<<endl;
    ofstream myFile;
    myFile.open("example.txt");
    myFile <<"living too fast";
    myFile.close();
    return 0;

}