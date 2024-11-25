#include<stdio.h>

int main(){
	int num;
	
	do {
		printf("Ban hay nhap vao mot so can doan(1-15): \n");
		scanf("%d",&num);
	if(num!=12){
		printf("Ban doan sai roi!!!");
	}
}
	while(num!=12);
	printf("Ban doan dung roi!!!");
}
