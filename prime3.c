#include<stdio.h>

int main()
{
    int i,j,r;
    for(i=2;i<=500; i++)
    {
        for(j=3;j<i;j++)
        { r=i%j;
            if(r!=0){
                if(j=(i-1))
                printf("\n numer is prime:%d",i);
                else
                continue;}

            else
                break;
        }
    }
}
