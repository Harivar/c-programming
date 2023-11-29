#include <stdio.h>
#include <string.h>

char* strcopy(char*t,char*s){
    char*temp=t;
    while(*t++=*s++);
    return temp;
}

char * strreverse(char*t){
    
    char temp;
    int end=strlen(t)-1;
    for(int i=0;i<end;i++){
        temp=t[i];
        t[i]=t[end];
        t[end]=temp;
        end--;
    }
    
    return t;
    
}


int strcompare(char*t, char*s){
    while(*t && *t==*s){
        t++;
        s++;
        
    }
    
    return *t-*s;
}
int main()
{
    
    char str1[20];
    char str2[20];
    
    scanf("%s",str1);
    
    
    if(strcompare(str1,strreverse(strcopy(str2,str1)))==0){
        printf("palindrome");
        
    }
    else
    printf("Not a palindrome");
    

    return 0;
}