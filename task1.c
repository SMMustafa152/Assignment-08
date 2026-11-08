#include <stdio.h>
int main(){
	int age=20;
	int *p=&age;
	printf("age:%d \n p:%d",age,*p);
	
	*p=21;
	printf("\nage:%d",age);
	
	return 0;
}