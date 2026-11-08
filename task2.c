#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
	
int main(){
	int x=8;
	int y=3;
	
	printf("before swapping:%d %d",x,y);
	swap(&x,&y);
	printf("\nafter swapping:%d %d",x,y);
	
	return 0;
}
	

