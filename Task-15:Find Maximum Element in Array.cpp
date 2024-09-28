#include<stdio.h>

int main()
{
    int arr[100],n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max_num=arr[0];

    for(i=1;i<n;i++)
    {
        if(max_num<arr[i])
        {
            max_num=arr[i];
        }
    }
    printf("Maximum Number of array:%d",max_num);


    return 0;
}

