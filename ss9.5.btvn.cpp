#include <stdio.h>

void nhap_mang(int arr[][4], int m, int n){
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Nhap chi so arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

void nhap_mang1(int brr[][4], int m, int n){
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Nhap chi so brr[%d][[%d]",i,j);
			scanf("%d",&brr[i][j]);
		}
	}
}

void tich_hai_mang(int crr[][4],int arr[][4], int brr[][4],int m, int n){
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			int count =0;
			for(int k=0;k<=n;k++)
			{
				count+=arr[i][k]*brr[k][j];
				crr[i][j]=count;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%5d",crr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int arr[4][4];
	nhap_mang(arr,4,4);
	int brr[4][4];
	nhap_mang1(brr,4,4);
	int crr[4][4];
	tich_hai_mang(crr,arr,brr,4,4);
}
