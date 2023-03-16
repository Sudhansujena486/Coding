#include<iostream>
using namespace std;
 void increase_order(int n){
       if(n==0)
       {
        return;
       }
       else
        {
          increase_order(n-1);
          cout<<n;
          cout<<",";
       }
 }
 void decrease_order(int n){
       if(n==0)
       {
        return;
       }
       else
        {
             cout<<n;
             cout<<",";
             decrease_order(n-1);
          
       }
 }
 
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"increase order"<<endl;
    increase_order(n);
    cout<<endl;
    cout<<"decrease order"<<endl;
    decrease_order(n);


}