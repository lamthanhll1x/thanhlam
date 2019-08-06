#include<stdio.h>
int main()
{
	int cong[4][3],tru[4][3],matran1[4][3],matran2[4][3];
	//ma tran 1
	printf("Nhap ma tran 1\n");
	for ( int i = 0; i < 4; i++)
	{
		for ( int j = 0; j < 3; j++)
		{
			printf("Nhap vao phan tu ma tran 1 ([%d][%d]): ", i,j);
			scanf("%d",&matran1[i][j]);
		}
	}
	//ma tran 2
	printf("Nhap ma tran 2\n");
	for ( int i = 0; i < 4; i++)
	for (int j = 0;j < 3; j++)
	{
		printf("Nhap vao phan tu ma tran 2 ([%d][%d]): ", i,j);
		scanf("%d",&matran2[i][j]);
	}
	//in ra 2 ma tran vua nhap
		printf("2 Ma tran vua nhap\n");
	for (int i = 0; i < 4; i++)
	{
			printf("\n");
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t",matran1[i][j]);
			printf("%d\t",matran2[i][j]);
		}
	}
	// tru 2 ma tran
	for (int i=0; i< 4; i++)
	
		for (int j=0; j<3; j++)
		{
		cong[i][j]=matran1[i][j] + matran2[i][j];
	}
		printf("\nKet qua phep cong cua 2 ma tran la: \n");
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j< 3; j++)
			{
				printf("%d\t",cong[i][j]);
			}
			printf("\n");
		}
	//tru 2 ma tran
	for (int i=0; i< 4; i++)
	
		for (int j=0; j<3; j++)
		{
		tru[i][j]=matran1[i][j] - matran2[i][j];
	}
		printf("\nKet qua phep tru cua 2 ma tran la: \n");
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j< 3; j++)
			{
				printf("%d\t",tru[i][j]);
			}
			printf("\n");
		}
	return 0;
}
