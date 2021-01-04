#include<stdio.h>
int main()
{
    int i,j;
    for(i=4;i<=500;i++)
    {
            for(j=2;j<=(i-1);j++)
            {
                if(i%j==0)
                    break;
            }
    }
        if(i==j)
        {
            printf("%d \n",i);
        }
    }

