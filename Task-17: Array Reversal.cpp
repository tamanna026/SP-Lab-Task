#include<stdio.h>

int main()
{
    int arr[100],n,i;
    printf("Enter the number of element:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


  printf("reverse order of the element:");
    for(i=n-1;i>=0;i--)
    {
        printf(" %d",arr[i]);
    }



    return 0;
}


