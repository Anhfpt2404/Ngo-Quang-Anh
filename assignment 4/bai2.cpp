#include <stdio.h>
int main(){
	int n;
	printf("\nNhap so nguyen duong:");
	scanf("%d",&n);
	
	for(int i=1;i=n-1;i++){
		if(i%2==0 && i%3==0){
			printf("\nSo can tim la :%d",i);
			break;
		}
	}
}
