//Author- Sudhansu Kumar Jena
//Palindrome
#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x){
    long long int reverse = 0, remainder;
int k=x;
 
     if(x<0)
    {
        return false;
    }
    else{
        //for reversing the element
       while (x > 0) {
    remainder = x % 10;
    reverse = reverse * 10 + remainder;
    x/= 10;
    
          }
    }
            
  if(k==reverse)
    {
        return true;
    }
    else{
        return false;
    }
}
int main(){
int n;
  printf("enter the number");
  scanf("%d",&n);
 int res=isPalindrome(n);
  if(res==1){
      printf("True");
  }
  else{
      printf("false");
  }
}
    
    
