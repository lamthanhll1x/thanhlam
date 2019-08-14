#include <stdio.h>

int main()
{
	int ar[4][4],n;
	int sum=0,tbc=0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Nhap ar[%d][%d]= ",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
			printf("Ma tran\n");
	for (int i = 0; i < 4; i++)
	{
			printf("\n");
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t",ar[i][j]);
		}
	}
	 for (int i = 0; i < 4; i++) 
   {
      for (int j = 0; j < 4; j++) 
	  {
         if (i == j)
            sum = sum + ar[i][j];
            tbc = sum/4;
      }
   }
   printf("\nTBC duong cheo cua ma tran la: %d", tbc);
	return 0;
}
