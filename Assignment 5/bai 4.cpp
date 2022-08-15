#include <stdio.h>
int main(){
	int n;
	printf("\nNhap 1 so nguyen duong : ");
	scanf("%d",&n);
	
	for(;n>10;){
		n=n/10;
	}
	printf("Chu so dau tien cua n = %d",n);
}
