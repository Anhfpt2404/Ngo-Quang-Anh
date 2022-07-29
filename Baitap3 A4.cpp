#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d",&n);
	int i = 1;
	while(i<n){
		if(n%i==0){
			printf("Cac uoc can tim la:%d \n",i);
			i++;
			
		}else{
			i++;
		}

}
//no
}
