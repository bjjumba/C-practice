#include<iostream>
#include<vector>
using namespace std;

 int countOdds(int low, int high) {
      vector<int> arr;
      //my for loop
      for(int i=low;i<=high;i++){
      //test odd numbers
      if(i%2!=0){
          arr.push_back(i);
        }
      } 
      //set small number to first element of the array
      int small=arr[0];
      for(int j=0;j<arr.size();j++){
        if(arr[j]<small){
            small=arr[j];
        }
      }
      return small;
    }

    //return number of array Odd with least memory usage
    int counts(int low,int high){
      int count;
      for(int i=low;i<=high;i++){
          if(i%2!=0)
          count++;
      }
      return count;
    }

int main(){
    int y=counts(8,10);
    cout<<y<<endl;
    return 0;
}