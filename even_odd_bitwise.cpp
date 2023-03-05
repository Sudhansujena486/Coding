#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    //using bitwise & to check even odd
    //here we are interested about the last bit
    //if last bit 1 then the number is odd and if the last bit is 0 then the number is even
    if(n&1){
        cout<<"the number in odd";
    }
    else{
        cout<<"the number is even";
    }
    }