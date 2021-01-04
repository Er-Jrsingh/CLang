#include<stdio.h>
int main()
{
    int i,num ,flag=0;
    for(num=2;num<=500;num++){
    for(i=2;i<num/2;i++)
    {
        if(num==2)
        {
            printf("2\n");

            continue;
        }
        else if(num%i!=0)
        {
           flag = 1;


        }
        if(flag=1)
            printf("%d",num);
        else
            break;
        break;
    }

    }
    }


