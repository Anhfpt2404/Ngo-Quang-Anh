#include <stdio.h>
int main(){
	int a,b,c,min;
	printf("Nhap so thu nhat = ");
	scanf("%d",&a);
	printf("\nNhap so thu hai = ");
	scanf("%d",&b);
	printf("\nNhap so thu ba = ");
	scanf("%d",&c);
	
	min=a;
	
	if(b<min)
		min=b;
	if(c<min)
		min=c;
	printf("\nSo nho nhat la %d",min);		
}

