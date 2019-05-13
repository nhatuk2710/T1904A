#include <stdio.h>

int main(){
	int data[3][4];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Nhap chi so data [%d][%d] ",i,j);
			scanf("%d",&data[i][j]);
		}
	}
	int beta[4][3];
	for(int m=0;m<4;m++)
	{
		for(int n=0;n<3;n++)
		{
			printf("Nhap chi so beta[%d][%d] ",m,n);
			scanf("%d",&beta[m][n]);
		}
	}
	int S;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			for(int m=0;m<4;m++)
			{
				for(int n=0;n<3;n++)
				{
					S=data[i]*[j]*beta[m]*[n];
				}
			}
		}
	}
	printf("Ket qua phep nhan = %d ",S);
	
	return 0;
}
