#include <stdio.h>

int main(){
	int a[10];
	for(int i=0;i<10;i++){
		printf("Nhap chi so a");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		int S=0;
		if(a[i]%i==0){
			S+=a[i];
		}
		
	}
	if(S==a[i]){
		printf("%d",S)
	}
}
