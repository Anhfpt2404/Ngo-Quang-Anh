#include <stdio.h>
int main(){
	int n;
	printf("\nVui long nhap so :");
	scanf("%d",&n);
	
	for(int i=1;i<n;i+=2){
		i%2==0;
		printf("\nCac so le nho hon la %d",i);
	}
}
