#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 {1,2,3,4,5};

    for(auto i=v1.begin();i!=v1.end();++i){
        cout<<*i<<endl;
    }

    cout<<v1.size()<<endl;
    return 0;
}