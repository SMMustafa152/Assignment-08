#include<stdio.h>
#include<string.h>
int main(){
char subjects[5][30];
int lenght=0;
int maxlen=0,maxindex=0;

for(int i=0;i<5;i++){
    printf("Enter Subject %d:",i+1);
        fgets(subjects[i],sizeof(subjects[i]),stdin);
        subjects[i][strcspn(subjects[i],"\n")]='\0';

        lenght=strlen(subjects[i]);
        if(lenght>maxlen){
             maxlen=lenght;
             maxindex=i;
            }
        }
        printf("\n");
        
        for(int i=0;i<5;i++){
            printf("%d.:",i+1);
            fputs(subjects[i],stdout);
            fputs("\n",stdout);
            
        }
        printf("\nlongest subject:%s",subjects[maxindex]);

    return 0;
}