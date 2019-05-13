#include <stdio.h>

int main(){
	int a[10];
	int n;
	for(int i=0;i<10;i++){
		printf("Nhap chi so ");
		scanf("%d",&a[i]);
	}
	int S=0;
	for(int i=0;i<10;i++){
		S+=a[i];
		n=S/10;	
		}
		printf("Ket qua trung binh cua 10 so la %d ",n);
		
	return 0;		
	}
