#include "stdio.h"

int SoThuanNghich(int N);
int main()
{
	int N, i;
	do
	{
		printf("\nNhap vao so N= ");
		scanf("%d", &N);
		
	}
	while(N <= 0);
	printf("\nCac so thuan nghich nho hon %d :",N);
	for(i = 1; i <= N; i++)
	{
		if (SoThuanNghich(i))
			printf("%d ", i);	
	}
	   return 0;
	   
}
 //Kiem tra so thuan nghich
int SoThuanNghich(int N)
{
	int tg =N;
	int temp = 0;
	while(N>0)
	{
		temp = temp*10 + N%10;
		N/=10;
	}
	return( temp == tg);
}
