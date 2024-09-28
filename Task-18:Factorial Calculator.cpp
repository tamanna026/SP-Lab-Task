#include<stdio.h>
int main()
{

    int F=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        F=F*i;
        i++;

    }
    printf("The factorial value of %d=%d\n",n,F);
    return 0;

}
