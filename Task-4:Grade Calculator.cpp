#include<stdio.h>
int main()
{
    int score;
    scanf("%d",&score);
    switch(score/10)
    {
        case 10:
        case 9:
        case 8:
        printf("A+\n");
        break;
        case 7:
        printf("A\n");
        break;
        case 6:
        printf("A-\n");
        break;
        case 5:
        printf("B\n");
        case 4:
        printf("B-\n");
        break;
        case 3:
        printf("C\n");
        break;
        default:
        printf("Fail!\n");
        
        

    }
    
      
   
    return 0;
}
