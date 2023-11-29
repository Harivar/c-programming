#include <stdio.h>
#include <string.h>

int main()
{
    
    char str[20];
    fgets(str, sizeof(str), stdin);
    int end=strlen(str)-1;
    char temp;
    
    for (int i=0; i<end;i++ )
    {
        temp=str[i];
        str[i]= str[end];
        str[end]=temp;
       end--;
        
    }
    printf("\n%s",str);
    
    
    

    return 0;
}