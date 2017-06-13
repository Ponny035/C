#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int check (char input);
main()
{
    double a,b,c,ans1,ans2,i,g,p,fx=1;
    int h,checkresult=0;
    char check_input;
    printf("Input your a : ");
    scanf("%lf",&a);
    printf("Input your b : ");
    scanf("%lf",&b);
    printf("Input your c : ");
    scanf("%lf",&c);
    if((a==0&&b==0&&c==0)||(a==0&&b==0&&c!=0))
    {
        printf("X=Complex");
    }
    else if (a==0&&b!=0&&c!=0)
    {
        //bx+c=0 bx=-c x=-c/b
        ans1=-c/b;
        printf("X=%.3lf",ans1);
    }
    else if (a!=0)
    {
        if(b*b-4*a*c>0)
        {
            ans1=(-b+sqrt(b*b-4*a*c))/(2*a);
            ans2=(-b-sqrt(b*b-4*a*c))/(2*a);
            printf("X1=%.3lf \nX2=%.3lf \n",ans1,ans2);
        }
        else if (b*b-4*a*c==0)
        {
             ans1=-b/(2*a);
             printf("X1=%.3lf \n",ans1);
        }
        else if (b*b-4*a*c<0)
        {
            printf("X=Imange Number\n");
            int ans;
            printf("Your Equation is (%.0lf)X^2+(%.0lf)x+(%.0lf) .Is that right? (Y/N) :", a, b, c);
            scanf(" %c",&check_input);
            checkresult=check(check_input);
            if(checkresult==1)
            {
                /*ans=fabs(b*b-4*a*c);
                i=fabs(b*b-4*a*c);
                printf("i= %d",i);
                h=ans;
                printf("ans= %d h= %d\n",ans,h);
                fx=1;
                for(g=30;g>0;g--)
                {
                    p=g*g;
                    while(1)
                    {
                        if(ans>=p)
                        {
                            int w=p,newg=g;
                            printf("I am here befor.%d fx=%d\n",newg,fx);
                            if(h%w==0)
                            {
                                printf("I am here after.%d\n",newg);
                                fx=fx*newg;
                                h=h/w;
                                printf("fx=%d\n",fx);
                            }
                        }
                    break;
                    }
                }
                printf("%d\n",h);
                printf("%d\n",fx);
                if(b==0)
                {
                    printf("X1=%dSqrt(%d)I\n",fx,h);
                    printf("X2=-%dSqrt(%d)I\n",fx,h);
                }
                else if (b>0)
                {

                }
                else if (b<0)
                {

                }
                ans=0;
                printf("Do you want to see another type of answer ? 1)Yes 2)No\nEnter your number : ");
                scanf("%1d",&ans);*/
                if(checkresult==1)
                {
                    i=fabs(b*b-4*a*c);
                    ans1=(-b+sqrt(i))/(2*a);
                    ans2=(-b-sqrt(i))/(2*a);
                    printf("X1=%.3lfI \nX2=%.3lfI \n",ans1,ans2);
                }
            }
        }
    }
}
int check(char input)
{
    if(input=='Y'||input=='y')
    {
        return 1;
    }
    else if (input=='N'||input=='n')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
