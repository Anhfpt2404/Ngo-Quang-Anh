#include <stdio.h>
int main(){
	int n;
	printf("\nNhap so nguyen duong:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(n%i==0)
		printf("\nCac uoc so cua n la %d",i);
	}
}
