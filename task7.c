#include <stdio.h>
#include<string.h>
int main(){
    char secret[]="nu2026";
    char code[10];
    printf("enter a code:");
    fgets(code,sizeof(code),stdin);
    code[strcspn(code,"\n")]='\0';

    if(strcmp(code,secret)==0){
        printf("Access Granted");
    }else{
        printf("Access Denied");
    }

    if(strncmp(code,"nu",2)==0){
        printf("\nCode starts with \"nu\": Yes");
    }else{
        printf("\nCode starts with \"nu\": No");
        
    }

    return 0;
}