#include<conio.h>
#include<stdio.h>

void main()
{
    int i,n=2,x,j,k;
    x=(n+2);

    for(i=0;i<=n;i++)
    {
       k=(x*i);
       x=(x+i*n);
       printf("\n %d",k);
    }
    printf("\n %d",x);
}
