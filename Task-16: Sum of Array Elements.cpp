#include<stdio.h>

int main()
{
    int arr[100],n,i,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }



    for(i=0;i<n;i++)
    {


        sum=sum+arr[i];
    }
    printf("Sum of the element:%d",sum);


    return 0;
}

