#include <stdio.h>
int Tinhtong(int n){
	if(n==0){
		return n;
	}else{
		return n%10 + Tinhtong(n/10);
	}
}
int main(){
	int n;
	printf("Nhap 1 so nguyen duong n\n");
	scanf("%d",&n);
	printf("%3d",Tinhtong(n));
}
