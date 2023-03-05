//getbit,setbit,clearbit,updatebit
#include<iostream>
using namespace std;
void get_bit(int n,int pos){
       int mask=1<<pos;
       int i=n&mask;
       if(i>0){
        cout<<1<<endl;

       }
       else if(i==0){
        cout<<0<<endl;
       }
}
void set_bit(int n,int pos){
    int mask=1<<pos;
    int num=n|mask;
    cout<<"num after setting the bit to 1: "<<num<<endl;
}
void clear_bit(int n,int pos){
    int mask=~(1<<pos);
    int num=n&mask;
    cout<<"num after clearing the bit(means setting to 0): "<<num<<endl;
}
void update_bit(int n,int pos,int val){
    cout<<"first we are clearing the bit"<<endl;
    clear_bit(n,pos);
    int mask=val<<pos;
    int num=n|mask;
    cout<<"num after updating the bit: "<<num<<endl;
}
int main(){
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
   cout<<"1:to get the ith bit"<<endl;
   cout<<"2:to set the ith bit"<<endl;
   cout<<"3:to clear the ith bit"<<endl;
   cout<<"4:to update the ith bit"<<endl;
   cout<<"5:to exit"<<endl;
   int ch;
   int pos;
   do{
    cout<<"enter choice"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
          cout<<"enter the position"<<endl;
          cin>>pos;
          get_bit(n,pos);
        break;
        case 2:
         cout<<"enter the position"<<endl;
         cin>>pos;
         set_bit(n,pos);
         
        break;
        case 3:
        cout<<"enter the position"<<endl;
        cin>>pos;
        clear_bit(n,pos);
        break;
        case 4:
         cout<<"enter the position"<<endl;
         cin>>pos;
         cout<<"enter the value"<<endl;
         int val;
         cin>>val;
         update_bit(n,pos,val);
        break;
        case 5:
        exit(0);
        break;
        default:
          cout<<"the entered choice is invalid "<<endl;
    }
   } while(ch!=6);   
}