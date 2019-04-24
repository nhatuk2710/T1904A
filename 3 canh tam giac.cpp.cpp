#include <stdio.h>

int main(){
	int a;
	printf("Nhap canh a cua tam giac");
	scanf("%d",&a);
	int b;
	printf("Nhap canh b cua tam giac");
	scanf("%d",&b);
	int c;
	printf("Nhap canh c cua tam giac");
	scanf("%d",&c);
    if (a+b>c && a+c>b && b+c>a){
    	printf("Day la 3 canh cua tam giac");
	}else{
		printf("Day khong phai 3 canh cua tam giac");
	}
}
