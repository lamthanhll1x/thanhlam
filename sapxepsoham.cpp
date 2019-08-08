#include<stdio.h>
void nhap(int a[],int &n)
{
	printf("\nNhap phan tu= ");
	scanf("%d",&n);
	for (int i=0; i<n;++i)
	{
		printf("\nPhan tu thu [%d]= ",i+1);
		scanf("%d",&a[i]);
	}
}
// sap xep mang tang dan
void sapxep(int a[], int n)
{
	for (int i=0; i<n-1;++i){
		for( int j = n-1;j>i;--j)
			if(a[j]<a[j-1]){
			int tg = a[j];
			a[j]=a[j-1];
			a[j-1]=tg;			
		}
	}			
}
// tim so lon nhat


void xuat(int a[], int n){
	for (int i=0; i<n;++i)
	printf("%d\t", a[i]);
	printf("\n");
}


int main()
{
	int a[10];
	int n;
	nhap(a,n);
	xuat(a,n);
	sapxep(a,n);
	xuat(a,n);
	return 0;	
}
