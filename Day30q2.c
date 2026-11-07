#include <stdio.h>
int main()
{
    int n;
    int positive=0,negative=0,zero=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element%d:",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            positive+=1;
        }
        else if(a[i]<0)
        {
            negative+=1;
        }
        else if(a[i]==0)
        {
            zero+=1;
        }
    }
    printf("positive:%d\t",positive);
    printf("negative:%d\t",negative);
    printf("zero:%d",zero);
    return 0;
}