#include <stdio.h>
#include <string.h>
int main()
{
    int i,size;
    char n[50];
    printf("enter binary number:");
    scanf("%s",n);
    size=sizeof(n);
    for(i=0;i<size;i++)
    {
        if(n[i] == '0')
        {
            printf("1");
        }
        else if(n[i] == '1')
        {
            printf("0");
        }
    }
    printf("\n");
}