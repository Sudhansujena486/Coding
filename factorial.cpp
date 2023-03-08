//factorial using recursion
#include<iostream>
using namespace std;

long long int factorial(int num){
    long long int fact;
    if(num>0){
     fact=num*factorial(num-1);
    }
   else{
    return 1;
   }
    return fact;
}
int main(){
    cout<<"enter the number";
    int num;
    cin>>num;
   cout<<"factorial is: "<< factorial(num);
}