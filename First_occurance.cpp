#include<iostream>
using namespace std;
      int first_occr(int arr[],int n,int key){
             if(n==0){
                  return -1;
             }
            if(arr[0]==key){
                  return 0;
            }
            int subindex= first_occr(arr+1,n-1,key);
       if(subindex!=-1){
            return subindex+1;
       }
       return -1;
      
 }
 
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int arr[100];
    cout<<"enter the array elements";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<"enter the key element";
    int key;
    cin>>key;
    cout<<"index of the key: "<<first_occr(arr,n,key);


}