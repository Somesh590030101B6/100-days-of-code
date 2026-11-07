#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    int l=INT_MIN;
    int s=INT_MAX;
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
        if(l<a[i])
        {
            l=a[i];
        }
        if(s>a[i])
        {
            s=a[i];
        }
    }
    printf("largest number is:%d\n",l);
    printf("smallest number is:%d\n",s);
    return 0;
}