#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the number of rows >>");
    int get;
    scanf("%d", &get);
    for (int i = 1; i <= get; i++)
    {
        if (i % 2 == 0)
        {
            a = 1;
            b = 0;
        }
        else
        {
            a = 0;
            b = 1;
        }
        for(int j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("%d", a);
            }
            else
            {
                printf("%d", b);
            }
        }
        printf("\n");
    }
}
