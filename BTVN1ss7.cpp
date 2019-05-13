#include <stdio.h>

int main(){
	int data[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Nhap data [%d][%d] ",i,j);
			scanf("%d",&data[i][j]);
		}
	}
	int a=0,b=0,c=0,d=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			a=data[0][0]+data[0][1]+data[0][2]+data[0][3];
			b=data[1][0]+data[1][1]+data[1][2]+data[1][3];
			c=data[2][0]+data[2][1]+data[2][2]+data[2][3];
			d=data[3][0]+data[3][1]+data[3][2]+data[3][3];
		}
	}
	int beta[4]{a,b,c,d};
	int max=beta[0];
	for(int x=0;x<4;x++)
	{
		if(beta[x]>max)
		{
			max=beta[x];
		}
	}
	printf("Hang lon nhat la %d ",max);
	

	return 0;
}
