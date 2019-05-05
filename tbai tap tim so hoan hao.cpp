#include <stdio.h>

int main(){
	int n;
	printf("Nhap so n tu ban phim");
	scanf(" %d ",&n);
	int x=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			x+=i;
		}
	}
	if(x==n){
		printf(" %d la so hoan hao ",n);
	}else{
		printf(" %d khong phai so hoan hao ",n);
	}
	
}
