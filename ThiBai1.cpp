#include<stdio.h>
#include<string.h>
#include<math.h>

	void displaymenu(){
	printf("1. Cong\n");
	printf("2. Tru\n");
	printf("3. Nhan\n");
	printf("4. Chia\n");
     }
int Cong(int a,int b){
	a+b;
    return 0;
}

int Tru(int a, int b){
	a-b;
    return 0;
}

int Nhan(int a, int b){
	a*b;
    return 0;
}
float Chia(int a,int b){
	a/b;
      return 0;
}

int main(int argc, char *argv[])
{
	displaymenu();
	int luachon;
	int a;
	int b;
	char confirm;
do
{
	printf("Nhap lua chon cua ban (1-4):");
	scanf("%d",luachon);
	printf("Nhap so nguyen a\n");
	scanf("%d",&a);
	printf("Nhap so nguyen b\n");
	scanf("%d",&b);
	printf("\n");
		switch(luachon){
 	case 1:printf("Ket qua:",Cong(a,b));break;
 	case 2:printf("Ket qua:",Tru(a,b));break;
 	case 3:printf("Ket qua:",Nhan(a,b));break;
 	case 4:printf("Ket qua:",Chia(a,b));break;
 	default:printf("Khong hop le");
                   }
	printf("\nNhan y de tiep tuc:");
	   scanf("%s",confirm);
	}while(confirm=='y'||confirm=='Y');

   return 0;
}
