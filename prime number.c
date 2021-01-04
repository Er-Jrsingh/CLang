#include<stdio.h>

int main()
{
    int i,j;

    printf("enter a Number:");
    scanf("%d",&j);

    for(i=2; i<=(j-1); i++)
    {
        if(j%i != 0)
            printf("Numer is prime: %d",j);
        else
            printf("Numbe Is Non Prime: %d",j);
        break;
    }



}
