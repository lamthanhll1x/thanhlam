#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,p,cv,s=0;
	printf("Nhap canh thu nhat: \n");
	scanf("%f", &a);
	printf("Nhap canh thu hai: \n");
	scanf("%f", &b);
	printf("Nhap canh thu ba: \n");
	scanf("%f", &c);
	 cv = (a+b+c);		
	if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)){
		printf("\nDay la ba canh cua tam giac");
			p = cv/2;
			s = sqrt(p*(p-a)*(p-b)*(p-c));
			printf("\nChu vi cua tam giac la %f\nDien tich cua tam giac la %f",cv,s);			
	}else
			printf("\nDay khong phai la ba canh cua tam giac");
}
