#include <stdio.h>
int Ptamgiac(int a, int b, int c){
	int P=a+b+c;
	return P;
}
int main(){
	int x,y,z;
	printf("\nNhap canh thu nhat = ");
	scanf("%d",&x);
	printf("\nNhap canh thu hai = ");
	scanf("%d",&y);
	printf("\nNhap canh thu ba = ");
	scanf("%d",&z);
	int v;
	v=Ptamgiac(x,y,z);
	printf("\nChu vi cua tam giac bang: %d",v);
}
