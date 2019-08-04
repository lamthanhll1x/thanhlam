#include<stdio.h>

int main()
{
	int n;
	printf("Nhap vao so luong phan tu:\n");
	scanf("%d", &n);
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("So thu %d: ",i+1);
		scanf("%d",&a[i]);
	for (int j=0;j<i;j++)	
		if(a[i]==a[j])
		{
			--i;
			break;
		}		
	}
	int inkq(int a[], int n);
	{
		printf("\nSo da nhap: ");
		for (int i=0; i < n; i++)
			printf("%d ", a[i]);
	}
	return 0;
}
