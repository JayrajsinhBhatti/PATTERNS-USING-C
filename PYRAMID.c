#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int space=5;space>=i;space--)
        {
            printf(" ");
        }
        for(int j=1;j<=(i*2)-1;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}