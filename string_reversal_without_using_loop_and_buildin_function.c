// Printing string in reverse order without indexing,looping or using any builtin function
//Here I am using recursion
#include <stdio.h>
 void reverse(char* s){
      if(*s!='\0'){
      reverse(s+1);
       printf("%c",*s);
      }
}
int main() {
    char str[5]="hello";
    
   printf("original string> %s\n",str);
   printf("reversed string>> ");
   reverse(str);
    return 0;
}
