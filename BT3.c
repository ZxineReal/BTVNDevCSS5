#include<stdio.h>

int main(){
	int num;
	int sum = 0;
	
	do{
		printf("Moi ban nhap vao mot so nguyen duong: \n");
		scanf("%d",&num);
		
	if(num<0){
		printf("Ban nhap sai roi, hay nhap vao mot so nguyen duong: \n");
	}
	} while(num<0);
	
	for(int i = 1; i <= num;i++){
		sum += i;
	}
	printf("Tong cac so tu 1 den %d la: %d \n",num,sum);
}