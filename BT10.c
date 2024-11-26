#include<stdio.h>

int main(){
	int number;
	printf("Ban hay nhap vao mot so: \n");
	scanf("%d",&number);
	
	while(number>0){
		int charactor = number % 10;
		printf("%d\t",charactor);
		number = number/10;
	}
}