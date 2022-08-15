#include <stdio.h>
int main(){
	int a,b,min,max;
	printf("Nhap so thu nhat = ");
	scanf("%d",&a);
	printf("\nNhap so thu hai = ");
	scanf("%d",&b);

	max = a;
	if(b>a){
		max = b;
	}
	for(int i=max/2;i>0;i--){
		if(a%i==0 && b%i==0){
			printf("\nUoc chung lon nhat cua 2 so la: %d",i);
			break;
		}
	}
	min = a;
	if(b<a){
		min = b;
	}
	for(int i=min;i!=0;i++){
		if(i%a==0 && i%b==0){
			printf("\nBoi chung nho nhat cua 2 so la: %d",i);
			break;
		}
	}	
}
	
