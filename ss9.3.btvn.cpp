#include <stdio.h>


void nhap_chi_so1(int brr[][4],int m,int n){
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Nhap brr[%d][%d]= ",i,j);
			scanf("%d",&brr[i][j]);
		}
	}
}

void nhap_chi_so(int arr[][4], int m,int n){
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Nhap arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

void tong_hai_tran(int crr[][4],int arr[][4],int brr[][4],int m, int n){
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			crr[i][j]=brr[i][j]+arr[i][j];
			printf("%5d",crr[i][j]);
		}
		printf("\n");
	}
	 

}

int main(){
	int arr[4][4];
	nhap_chi_so(arr,4,4);
	int brr[4][4];
	nhap_chi_so1(brr,4,4);
	int crr[4][4];
 	tong_hai_tran(crr,brr,arr,4,4);
}
