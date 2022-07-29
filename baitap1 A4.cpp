#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d",&n);
	int i = 1;
	while(i<n){
		//yes
		printf("Cac so le trong day: %d \n",i,n);
		i+=2;
		i%2==0;
	}
	// no
}
