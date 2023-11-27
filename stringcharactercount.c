include<stdio.h>

void stringcount(char *t){
    int count=0, count1=0, count2=0;
    while(*t)
    {
        
        if(*t>='a' && *t<='z' || *t>='A' && *t<='Z'){
            count++;
        }
       else if(*t>='0' && *t<='9'){
            count1++;
        }
        else
        count2++;
        
    ++t;
    }
    printf("alphabets:%d",count);
     printf("digits:%d",count1);
      printf("spc chr:%d",count2);


}


int main(){
 char ch1[40];
    
    scanf("%s",ch1);
    stringcount(ch1);
  
}  