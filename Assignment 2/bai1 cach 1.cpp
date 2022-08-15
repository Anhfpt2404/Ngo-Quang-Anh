#include <stdio.h>
int main(){
	int a,b,c,max;
	printf("Nhap so thu nhat = ");
	scanf("%d",&a);
	printf("\nNhap so thu hai = ");
	scanf("%d",&b);
	printf("\nNhap so thu ba = ");
	scanf("%d",&c);
	
	max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	
	printf("\nSo lon nhat trong 3 so la: %d",max);
	
}
