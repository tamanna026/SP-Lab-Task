#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter the lengths of a triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {

        printf("valid triangle");
    }


    else{
        printf("Not valid");
    }

    return 0;
}
