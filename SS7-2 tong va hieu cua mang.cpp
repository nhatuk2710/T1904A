#include <stdio.h>

int main(){
	int m,n;
	do{
		printf("Nhap m ");
		scanf("%d",&m);
	}while(m<=0);
	do{
		printf("Nhap n ");
		scanf("%d",&n);
	}while(n<=0);

	int data[m][n];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap data[%d][%d] ",i,j);
			scanf("%d",&data[i][j]);
		}
	}
	int x,y;
	do{
		printf("Nhap x ");
		scanf("%d",&x);
	}while(x<=0);
	do{
		printf("Nhap y ");
		scanf("%d",&y);
	}while(y<=0);
	int beta[x][y];
	for(int a=0;a<x;a++){
		for(int b=0;b<y;b++){
			printf("Nhap beta[%d][%d] ",a,b);
			scanf("%d",&beta[a][b]);
		}
	}
	int S=0;
	int A=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int a=0;a<x;a++)
			{
				for(int b=0;b<y;b++)
				{
					S+=data[i][j]+beta[a][b];
					A-=data[i][j]-beta[a][b];
					
	
		}
	} 
			
		}
	}
		printf("Tong cua mang la %d ",S);
		printf("Hieu cua mang la %d ",A);
	
	return 0;
}
