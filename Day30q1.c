#include <stdio.h>
int main()
{
    int n;
    int even=0,odd=0;
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
        if(a[i]%2==0)
        {
            even+=1;
        }
        else if(a[i]%2!=0)
        {
            odd+=1;
        }
    }
    printf("even:%d\t",even);
    printf("odd:%d",odd);
    return 0;
}