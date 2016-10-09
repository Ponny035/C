#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main ()
{
    system("color A");
    int num,w=0,ab,ab2;
    double anspow,anspow2,i=1;
    printf("Please input your number. : ");
    scanf("%d",&num);
    while(num>=anspow)
    {
        anspow=pow(i,2);
        anspow2=pow(i+1,2);
    }
    ab=abs(num-anspow);
    ab2=abs(num-anspow2);
    if(ab2>ab)
    {
        for()
    }
    else
    {
        for
    }
    if(num<2)
        {
           printf("%d is not prime.\n",num);
        }
    else
        {
        if(w<1)
            {
                printf("%d is prime.\n",num);
            }
        else
            {
                printf("%d is not prime.\n",num);
                printf("Factors: ");
                for(i =1;i <=num;i++)
                {
                    if(num%i==0)
                    {
                        printf("%d",i);
                        if(i<num)
                        {
                            printf(" ");
                        }
                    }

                }
            }
        }
}
