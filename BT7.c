#include<stdio.h>

int main(){
	int num1, num2;
	
	do{
		printf("Moi ban nhap vao so nguyen duong thu nhat \n");
		scanf("%d",&num1);
		
		if(num1<0){
			printf("Ban hay nhap vao so nguyen duong");
		}
	}	
	while(num1<0);
	do{
		printf("Moi ban nhap vao so nguyen duong thu hai\n");
		scanf("%d",&num2);
		
		if(num2<0){
			printf("Ban hay nhap vao so nguyen duong");
		}
	}
	while(num2<0);
	int min = num1 < num2? num1 : num2;
	int ucln = 1;
	for(int i = min; i >=1; i--){
		if(num1 % i ==0 && num2 % i == 0){
			ucln = i;
				printf("Uoc chung lon nhat cua %d va %d la: %d", num1, num2, i);
			break;
		}
	}
	return 0;
}