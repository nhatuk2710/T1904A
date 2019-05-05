#include <stdio.h>

int main(){
	int X =100;
	double a=1,b=1,n;
	for(int i=1;i<=X;i++){
		a=b;
		b=n;
		n=a+b;
	}
	printf(" so thu 100 la %lf ",n);
}
