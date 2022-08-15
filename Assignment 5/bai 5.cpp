#include <stdio.h>
int main(){
	int n;
	printf("\nNhap 1 so nguyen duong : ");
	scanf("%d",&n);
	
	int max=n%10;
	for(;n>0;){
		int a = n%10;
		if(a>max){
			max=a;
		}
		n=n/10;
	}
	printf("Chu so lon nhat cua n = %d",max);
}
