//Author -Sudhansu Kumar Jena
//Rotate Array
#include <iostream>
#include<vector>
using namespace std;
     //find the position where each element will be placed after rotation
    void rotate(vector<int>& nums, int k) {
      vector<int> temp(nums.size(),0);
      for(int i=0;i<nums.size();i++){
          if((i+k)<nums.size()){
              temp[i+k]=nums[i];
          }
          else{
              //if size limit exceeds the take mod to find the appropriate position
              temp[(i+k)%nums.size()]=nums[i];
          }
      }
      //for coyping elements to the original array
      for(int i=0;i<nums.size();i++){
          nums[i]=temp[i];
      }    
       
    }
    /*test case
      arr={1,2,3}
      k=5;
    */

int main() {
    int k=2;
    vector<int> arr={};
    rotate(arr,k);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    

    return 0;
}