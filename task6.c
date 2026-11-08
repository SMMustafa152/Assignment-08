#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    char rollno[5];
printf("Enter your first name:");
fgets(name,sizeof(name),stdin);
name[strcspn(name,"\n")]='\0';

printf("Enter your roll no:");
fgets(rollno,sizeof(rollno),stdin);
rollno[strcspn(rollno,"\n")]='\0';

strcat(name,"_");
strcat(name,rollno);

printf("username:%s \n",name);

printf("lenght:%d ",(int)strlen(name));


    return 0;
}