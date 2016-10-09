#include <stdio.h>
#include <stdlib.h>
main ()
{
    system("color A");
    int num=9,n=2,w=0,i ;
    printf("Please input your number. : ");
    scanf("%d",&num);
    for(i =2;i <=num-1;i++)
        {
            if(num%i<=0)
                {
                    w=5;
                    break;
                }
        }
    printf("%d is ",num);
    //check 1or-1 -2 -3 ...
    if(num<2)
        {
           printf("not prime.\n");
        }
    else
        {
        if(w<1)
            {
                printf("prime.\n");
            }
        else
            {
                printf("not prime.\n");
            }
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
