#include <stdio.h>

int main(){
	int a;
	printf("Nhap so a bang ban phim");
	scanf("%d",&a);
	int i=0;
	while(i<=a){
		i=i+1;
		if(a%i==0){
			printf(" %d ",i);
		}
	}
	return 0;
}
