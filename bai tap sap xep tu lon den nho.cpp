#include <stdio.h>

int main(){
	int n,m,l;
	int a[n];
	printf("Nhap so luong phan tu ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap chi so ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int l=i+1;l<n;l++){
			if(a[i]<a[l]){
				m=a[i];
				a[i]=a[l];
				a[l]=m;
				  
			}
		}
	}
	for(int i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
	return 0;
}
