#include<stdio.h>

char * stringlower(char *t){
    char * ch2= t;
    while(*t)
    {
        
        if(*t>='A' && *t<='Z'){
            *t+=32;
        }
        ++t;
    }

    return ch2;
}


int main(){
 char ch1[40];
    
    scanf("%s",ch1);
    printf("%s",stringlower(ch1));
    

}