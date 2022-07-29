#include <stdio.h>
int main(){
	int n;
	printf("Nhap n: \n");
	scanf("%d",&n);
	
	int i =n - 1;
	
	while(i>0){
		if(i%6==0){
			//yes
			printf("So can tim la:%d \n",i);
			break;
		}else{
			i--;
		}
	}
	//no
		
}
