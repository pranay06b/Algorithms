#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    int temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        {
            for(j=i;j>0&&a[j]<a[j-1];j--)
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
