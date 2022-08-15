#include <stdio.h>
int main(){
	int a,b,c,max;
	printf("Nhap so thu nhat = ");
	scanf("%d",&a);
	printf("\nNhap so thu hai = ");
	scanf("%d",&b);
	printf("\nNhap so thu ba = ");
	scanf("%d",&c);
	
	if(a>b){
		//yes
		if(b>c)
		printf("\nSo lon nhat trong 3 so la %d",a);
	}else{
		if(b>c){
		printf("\nSo lon nhat trong 3 so la %d",b);
		}else{
			if(c>a)
			printf("\nSo lon nhat trong 3 so la %d",c);
		}
	}
}
