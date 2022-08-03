#include <stdio.h>
int main(){
	int n;
	printf("\nNhap so luong phan tu n =");
	scanf("%d",&n);
	int arr[n], i, tong=0, k=0;
	int maxNum = arr[i];
	
	for(i=0;i<n;i++){
		printf("\nNhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	
	int minNum = arr[0];
	for(int i =0;i<n;i++){
		if(arr[i]<minNum) minNum=arr[i];
	}
	printf("Phan tu nho nhat trong day so: %d",minNum);
}
}
		
