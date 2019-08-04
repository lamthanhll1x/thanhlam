#include<stdio.h>

int main()
{
	int n,x[10];
	
	printf("Nhap vao so luong phan tu:\n");
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		printf("So thu %d: \n",i+1);
		scanf("%d",&x[i]);
	}
		int tong=0;
		for(int i=0;i<n;i++)
		{
		tong=tong+x[i];	
		}
		printf("\nKet qua trung binh cua cac so = %f",(float)tong/n);	
	
	return 0;
}
