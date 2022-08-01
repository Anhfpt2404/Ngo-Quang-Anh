#include <stdio.h>
int main(){
	int i = 1;
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	while(i<n){
		printf("Cac so le can tim la: %d \n",i);
		i%2==0;
		i+=2;
	}
	
}
