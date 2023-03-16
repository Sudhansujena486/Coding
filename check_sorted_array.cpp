#include<iostream>
using namespace std;
 bool sort(int arr[],int size){
         if(size==1|size==0){
            return true;
         }
        if(arr[0]<arr[1]&sort(arr+1,size-1)){
          return true;
        }
       
        return false;
        
 }
int main(){
    int arr[100];
    int size;
    cout<<"enter the array size";
    cin>>size;
    cout<<"enter the array elements";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //Output 1 ==sorted & 0==unsorted
   cout<<sort(arr,size);


}