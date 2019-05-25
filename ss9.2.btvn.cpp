#include <stdio.h>

void nhap_chi_so(int arr[][4],int m,int n){
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Nhap arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%3d",arr[i][j]);
		}
			printf("\n");
	}
}
int main(){
	int arr[4][4];
	nhap_chi_so(arr,4,4);
}
