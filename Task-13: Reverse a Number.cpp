#include<stdio.h>
int main()
{

    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        int rem=temp%10;
        sum=(sum*10)+rem;
        temp=temp/10;

    }
    printf("The reverse number:%d",sum);
    return 0;


}
