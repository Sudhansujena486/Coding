#include<iostream>
using namespace std;

 void insertion_sort(int arr[],int size)
 {
      int i, j, temp;  
    for (i = 1; i < size; i++) {  
        temp = arr[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= arr[j]) { 
            arr[j+1] = arr[j];     
            j = j-1;    
        }    
        arr[j+1] = temp;    
    }  
 }
int main(){
int arr[1000];
int n;

cout<<"enter the number of elements to  be inserted";
cin>>n;
cout<<"enter the elements to be inserted in to the array";
for (int i=0;i<n;i++){
   cin>>arr[i];
}
cout<<"array elements before sorting"<<endl;
for (int i=0;i<n;i++){
   cout<<arr[i];
}
cout<<endl;
insertion_sort(arr,n);
cout<<"array elements after sorting"<<endl;
for (int i=0;i<n;i++){
   cout<<arr[i];
}

}