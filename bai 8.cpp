#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d",&n);
	int S=0;
	int i=1;
	while(i<=n){
		// yes
	    S = S + i;
	    i++;
	}
	printf("Tong cua day so la: %d",S);
	// no
}
