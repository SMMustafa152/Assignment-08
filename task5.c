#include <stdio.h>
int divide(int a,int b,int *result){
    if(result==NULL){
        return -1;
    }
    if(b==0){
        return -1;
    }

    *result=a/b;
    return 0;
}
int main(){
    int x,y;
printf("enter number x:\n");
scanf("%d",&x);
printf("enter number y:\n");
scanf("%d",&y);

int status,answer=0;
status=divide(x,y,&answer);
printf("status:%d",status);

// status=divide(x,y,&answer);
// printf("status:%d",status);

// status=divide(x,y,&answer);
// printf("status:%d",status);





    return 0;
}