#include <stdio.h>
int main(){
	float S;
	int a,b,c,P,p;
	printf("Nhap canh thu nhat = ");
	scanf("%d",&a);
	printf("\nNhap canh thu hai = ");
	scanf("%d",&b);
	printf("\nNhap canh thu ba = ");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c>a){
		//yes
		printf("\nDay la 3 canh cua 1 tam giac ");
		P=a+b+c;
		printf("\nChu vi cua tam giac bang %d",P);
		p=P/2;
		S=p*(p-a)*(p-b)*(p-c)/S;
		printf("\nDien tich cua tam giac bang %f",S);		
	}
}
