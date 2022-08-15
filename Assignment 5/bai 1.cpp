#include <stdio.h>
int main(){
	int S;
	int n;
	printf("\nNhap 1 so nguyen duong : ");
	scanf("%d",&n);
	
	for(int i=1;i<n;i++){
		if(n%i==0){
		printf("\nCac uoc so la: %d",i);
		S=S+i;
		}
	}
	printf("\nTong cac uoc so bang %d ",S);
}
