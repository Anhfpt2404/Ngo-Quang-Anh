#include <stdio.h>
int main(){
	int n;
	printf("\nNhap so luong phan tu n =");
	scanf("%d",&n);
	
	int arr[n], i, tong=0, k=0;
	
	for(i=0;i<n;i++){
		printf("\nNhap arr[%d]=",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			tong = tong+arr[i];
			k=k+1;
		}
	}
	
	printf("Trung binh cong cac so le la: %f",(float) tong/k);
}	

