#include <stdio.h>
int main(){
	int arr[]={4,9,2,7,5};
	int highest=0;
	int sum=0;
	
	int *p=arr;
	for(int i=0;i<5;i++){
		if(*p > highest){
			highest=*p;
		}
		sum=sum+*p;
		p++;
		
	}
	printf("highest:%d, sum:%d",highest,sum);
	
	
	
	return 0;
}