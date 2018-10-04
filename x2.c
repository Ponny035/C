#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
  double a;
  double b;
  double c;
  printf("Input your a : ");
  scanf("%lf",&a);
  printf("Input your b : ");
  scanf("%lf",&b);
  printf("Input your c : ");
  scanf("%lf",&c);
  if(a==0&&b==0&&c!=0) {
    //0x^2+0x+1=0
    printf("Can't find answer of this equation.");
  }
  else if (a==0&&b==0&&c==0) {
    //0x^2+0x+0=0
    printf("X is Real Number.");
  }
  else if (a==0&&b!=0&&c!=0) {
    //bx+c=0 bx=-c x=-c/b
    double ans;
    ans=-c/b;
    printf("X=%.2lf",ans);
  }
  else if (a!=0) {
    double inSqrt = b*b-4*a*c;
    if(inSqrt>0) {
      double ans1;
      double ans2;
      ans1=(-b+sqrt(inSqrt))/(2*a);
      ans2=(-b-sqrt(inSqrt))/(2*a);
      printf("X1 = %.2lf \nX2 = %.2lf \n",ans1,ans2);
    }
    else if (inSqrt==0) {
      double ans;
      ans=-b/(2*a);
      printf("X1 = %.2lf \n",ans);
    }
    else if (inSqrt<0) {
      double ans1;
      double ans2;
      inSqrt =  fabs(inSqrt);
      ans1=(-b+sqrt(inSqrt))/(2*a);
      ans2=(-b-sqrt(inSqrt))/(2*a);
      printf("X1 = %.2lfi \nX2 = %.2lfi \n",ans1,ans2);
    }
  }
  return 0;
}
