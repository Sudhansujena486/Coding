//Author-Sudhansu Kumar Jena
//Concatenation of array
//Time complexity o(n) //extra space is taken
#include<iostream>
#include<vector>
using namespace std;
    vector<int> getConcatenation(vector<int>& nums) {
       
      vector<int> temp(nums.size()*2,0);
      
      for(int i=0;i<temp.size();i++)
      {
        temp[i]=nums[i%nums.size()];
        //take modulous to find the appropriate position
      }  
       return temp;
      }
int main(){
    vector<int> nums={1,2,3};
    vector<int> k=getConcatenation(nums);
    for(int i=0;i<k.size();i++){
        cout<<k[i];
    }
    
}