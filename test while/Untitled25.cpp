#include <stdio.h>
int main(){
	int n;
	long S = 0;
	do{
		printf("Nhap vao so nguyen duong n:");
		scanf("%d",&n);
	if(n<0){
		printf("\n So n phai lon hon 0, vui long nhap lai !");
	}
	}while(n<=0);
		printf("Cac uoc so cua %d la:",n);
		for(int i=1;i<=n;i++){
			if(n%i==0){
				printf("%4d",i);
				S=S+i;
				
			}
		}
		printf(" \n Tong cac uoc so cua %d la: %ld ",n,S);
	}

