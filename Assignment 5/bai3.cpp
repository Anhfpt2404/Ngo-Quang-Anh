#include <stdio.h>
int main(){
	int n;
	printf("\nNhap 1 so nguyen duong : ");
	scanf("%d",&n);
	
	int S = 0;
	for(;n>0;){
		S = S + n%10;
		n=n/10;
	}
	printf("Tong cac chu so la :%d",S);
}

	
	
