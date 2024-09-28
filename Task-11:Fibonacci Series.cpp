#include<stdio.h>
int main()
{
    int n, first_num=0,second_num=1,Fibo=0;
    printf("Enter the range of series:");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        if(i<=1)
        {
            Fibo=i;

        }
        else{

        Fibo=first_num+second_num;
        first_num=second_num;
        second_num=Fibo;

        }
        printf(" %d",Fibo);

    }





    return 0;


}
