#include<stdio.h>

int main(){
	int num;
	
	do{
		printf("Moi ban nhap vao mot so tu 1 den 10: \n");
		scanf("%d",&num);
		
	if(num < 1 || num > 10){
		printf("Khong hop le");
	}
	} while(num < 1 || num > 10);
	
		printf("Bang cuu chuong cua %d la: \n",num);
		for(int i=1;i<=10;i++){
		printf("%d * %d = %d\n", num, i, num * i);

	}
	return 0;
}