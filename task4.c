#include<stdio.h>
int main(){
    const char* p="Hello World 2026";
    int upper=0,lower=0,space=0,digits=0;
    while(*p!='\0'){
        if(*p>='A'&&*p<='Z'){upper++;}
        else if(*p>='a'&&*p<='z'){lower++;}
        else if(*p>='0'&&*p<='9'){digits++;}
        else if(*p==' '){space++;}
       p++; 
    }
    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits           : %d\n", digits);
    printf("Spaces           : %d\n", space);

    return 0;



    
    return 0;
}