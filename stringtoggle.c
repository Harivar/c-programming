#include<stdio.h>

char * stringtoggle(char *t){
    char * ch2= t;
    while(*t)
    {
        
        if(*t>='a' && *t<='z'){
            *t-=32;
        }
       else if(*t>='A' && *t<='Z'){
            *t+=32;
        }
        
    ++t;
    }

    return ch2;
}


int main(){
 char ch1[40];
    
    scanf("%s",ch1);
    printf("%s",stringtoggle(ch1));
    

}