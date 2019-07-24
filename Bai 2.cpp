#include <stdio.h>
int main() {
	int a, b, c, min, maxxx;
	
	printf("Nhap vao so thu nhat: \n");
	scanf("%d", &a);
	printf("Nhap vao so thu hai: \n");
	scanf("%d", &b);
	printf("Nhap vao so thu ba: \n");
	scanf("%d", &c);
	
	min=maxxx=a;
	
	if(b>maxxx)
	maxxx=b;
	if(c>maxxx)
	maxxx=c;
	printf("\nSo lon nhat la %d", maxxx);
	
	
	if(b<min)
	min=b;
	if(c<min)
	min=c;
	printf("\nSo nho nhat la %d", min);
	
	
return 0;
}
