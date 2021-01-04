#include<stdio.h>
#include<conio.h>

void main()
{
    int no; int sod=0; int nod=0;

    printf("Enter No ");
    scanf("%d",&no);

    while(no!=0)
    {
        sod+=no%10; //sod=sod+no%10;

        no=no/10;

        nod++;

    }


  printf("Sum Of Digit = %d\n",sod);

  printf("Number Of Digit = %d",nod);

}
