#include<stdio.h>

int main(){
	int num;
	for(num=1;num<=9;num++){
		printf("Bang nhan cua %d la: \n",num);
	 for(int i = 1; i <= 10; i++){
		printf("%d * %d = %d\n",num, i, num * i);
	}
}
return 0;
}