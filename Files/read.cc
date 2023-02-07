#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string word;
    ifstream myFile ("example.txt");

    //check whether the file is open
    if(myFile.is_open()){
        while(getline(myFile,word)){
            cout<<word<<endl;
        }
        myFile.close();
    }
    //throw an exception
    else{
        cout<<"Unable to Open File"<<endl;
    }
    return 0;
}