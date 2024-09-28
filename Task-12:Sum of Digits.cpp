#include<stdio.h>
int main()
{

    int n;
    printf("Enter any digit:");
    scanf("%d",&n);
    int sum=0;
    int temp=n;
    while(temp!=0)
    {
        int rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("The sum of the digit:%d",sum);
    return 0;
}
