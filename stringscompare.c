#include <stdio.h>

int stringcpy(char*t,char*s){
    // char*temp=t;
  
     while(*t && *t++==*s++);
    return *t-*s;
}

int main() {
    // Write C code here    
     char ch1[40];
    char ch2[20];
    scanf("%s",ch1);
    scanf("%s",ch2);
   printf("%d\n",stringcpy(ch1,ch2));
    
   if(stringcpy(ch1,ch2)==0)
   printf("equal");
   else
   printf("notequal");
    return 0;
}