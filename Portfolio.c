#include<stdio.h>
#include<stdlib.h>
main()
{
    int page,paper,i,listfrist=1,listback;
    printf("Input your page. : ");
    scanf("%d",&page);
    if((page>=4)&&((page%4)==0))
    {
        paper=page/4;
        printf("You need %d paper",paper);
        if(paper>1)
        {
            listback=page;
            printf("s.\n");
            for(i=1;i<=paper;i++)
            {
                int n=0;
                printf("Paper %d\n",i);
                printf("BackLeft  : %d\tBackRight  : %d\n",listfrist,listback);
                printf("FrontLeft : %d\tFrontRight : %d\n",listfrist+1,listback-1);
                listfrist=listfrist+2;
                listback=listback-2;
                printf("\n");
            }
        }
        else
        {
            printf(".\n");
            printf("Paper 1\n");
            printf("BackLeft  : 1\tBackRight  : 4\n");
            printf("FrontLeft : 2\tFrontRight : 3\n");
        }
    }
    else
    {
        printf("You can't print out it.\n");
    }
    system("pause");
}
