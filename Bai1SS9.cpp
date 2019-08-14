#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20],s2[20];
    printf("Nhap chuoi S1: \n");
    scanf("%s",s1);
    printf("Nhap chuoi S2: \n");
    scanf("%s",s2);
    printf("Chuoi S1: %s\n",s1);
    printf("Chuoi S2: %s\n",s2);
    int i = 0, j = 0;
    int flag = 0;
    while  (s1[i] != 0)
    {
        if (s1[i] == s2[j])
        {
            j++;
            if (s2[j] == 0)
            {
                flag = 1;
                break;
            }
        }
        else j=0;
        i++;
    }
    if(flag)
        printf("Chuoi s2 nam trong chuoi S1\n");
    else
        printf("Chuoi s2 khong nam trong chuoi s1");
    return 0;
}
