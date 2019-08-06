#include<stdio.h>
int main()
{
	int a[4][3],b;
	for ( int i = 0; i < 4; i++){
		for ( int j = 0; j < 3; j++){
			printf("Nhap vao Ma tran ([%d][%d]): ", i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("Ma tran\n");
		for (int i = 0; i < 4; i++){
		printf("\n");
		for (int j = 0; j < 3; j++){
			printf("%d\t",a[i][j]);
		}
	}
	
	for ( int i = 1; i < 4; i++){
		for ( int j = 0; j < 3; j++){
		a[i][j] = a[j][i];
		}
	}
		printf("\nMa tran chuyen vi: \n");
		for ( int i = 0; i < 4; i++){
			 printf("\n");
			 for ( int j = 0; j < 3; j++){
			 	printf("%d\t",a[i][j]);
			 }
		}
		
		
	return 0;
}



