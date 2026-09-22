#include <stdio.h>
#include <string.h>
int main()
{
    int r,i,c;
    char n[50];
    printf("enter number:");
    scanf("%s",n);
    int size;
    size=strlen(n);
    printf("%c",n[size-1]);
    for(i=1;i<size-1;i++)
    {
        printf("%c",n[i]);
    }
    printf("%c",n[0]);
    printf("\n");
}