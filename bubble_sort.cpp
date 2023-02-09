//Author- Sudhansu Kumar Jena
#include<iostream>
using namespace std;
 void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
void print(int arr[],int n){
 cout<<"array elements after sorting";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i];
    } 
}
int main(){
  int arr[100];
  int n;
  cout<<"enter the number of elements"<<endl;
  cin>>n;
  cout<<"enter the elements"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    }
    cout<<"array elements before sorting"<<endl;
    for(int i=0;i<n;i++)
  {
    cout<<arr[i];
    }
    
  bubbleSort(arr,n); 
  cout<<endl;
  print(arr,n);
  }  
