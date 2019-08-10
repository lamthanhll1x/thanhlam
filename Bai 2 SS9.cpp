#include <stdio.h>
#include <string.h>
int main()
{
    char a[50],temp;
    printf("Nhap vao chuoi ky tu:\n");
    scanf("%s",a);
    printf("Chuoi truoc khi sap xep: %s\n",a);
    int n = strlen(a);
    for (int i = 0; i < n-1 ; ++i) {
        for (int j = i+1; j < n ; ++j) {
            if ( a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
            printf("\nChuoi sau khi sap xep: %s\n",a);
    return 0;
}


