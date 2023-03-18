#include<iostream>
using namespace std;

void sort(int arr[],int s){
    int start=0;
    int end=s-1;
    while(start<end){
    while(arr[start]==0&& start<end){
        start++;
    }
    while(arr[end]==1&& start<end){
        end--;
    }
    if(start<end){
       swap(arr[start],arr[end]);
       start++;
       end--;
    }}
   
}

int main(){

    int arr[]={1,1,1,0,1,1,0};
    int size =sizeof(arr)/sizeof(int);
    sort(arr,size);
   for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}