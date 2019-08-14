#include <stdio.h>
#include <string.h>
int kiemtra_chuoi (const char *s1, const char *s2)
{
    if(strstr(s1,s2))
        return 1;
    return 0;
}
int main()
{
    char s1[20],s2[20];
    printf("Nhap chuoi S1: \n");
    scanf("%s",s1);
    printf("Nhap chuoi S2: \n");
    scanf("%s",s2);
    printf("Chuoi S1: %s\n",s1);
    printf("Chuoi S2: %s\n",s2);
    printf(kiemtra_chuoi(s1,s2) ?"Chuoi s2 nam trong chuoi s1\n": "Chuoi s2 khong nam trong chuoi s1");

    return 0;
}


