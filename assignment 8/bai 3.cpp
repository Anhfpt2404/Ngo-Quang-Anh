#include <stdio.h>
int TimUocMax(int a, int b){
	for(int i = 1; i<a && i<b ;i--){
		if(a%i==0 && b%i==0)
		return i;
	}
}
int main(){
	int x,y;
	printf("\nNhap so thu nhat  = ");
	scanf("%d",&x);
	printf("\nNhap so thu hai = ");
	scanf("%d",&y);
	int z;
	z=TimUocMax(x,y);
	printf("\nUoc chung lon nhat cua 2 so la : %d",z);
}
