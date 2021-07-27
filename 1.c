#include <stdio.h>

int main()
{
    printf("Enter the number of rows >>");
    int get;
    scanf("%d", &get);
   // printf("You have entered %d", get);
    for(int i=1;i<=get;i++)
    {
        int a=0;
        int b=1;
        if(i%2!=0)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d", b);
            }
            printf("\n");
        }
        //printf("loopend1\n");
        else
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d", a);
            }
            printf("\n");
        }
        //printf("loopend2\n");
    }
}
