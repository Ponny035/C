#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
  long long int decimal;
  int count=0,i=1;
  double anspow=0,base;
  printf("Input Decimal Number. : ");
  scanf("%lld",&decimal);
  printf("Input your base. : ");
  scanf("%lf",&base);
  while(anspow<=decimal) {
    count=count+1;
    anspow=pow(base,count);
  }
  int lak[count];
  while(decimal!=0) {
    int base2=base;
    lak[i]=decimal%base2;
    decimal=decimal/base2;
    i++;
  }
  if(count%4==3) {
    printf("000");
  }
  if(count%4==2) {
    printf("00");
  }
  if(count%4==3) {
    printf("0");
  }
  for(i=count;i>0;i--) {
    if(lak[i]>=10) {
      if(lak[i]==10) {
        printf("A");
      }
      else if(lak[i]==11) {
        printf("B");
      }
      else if(lak[i]==12) {
        printf("C");
      }
      else if(lak[i]==13) {
        printf("D");
      }
      else if(lak[i]==14) {
        printf("E");
      }
      else {
        printf("F");
      }
    }
    else {
      printf("%d",lak[i]);
    }
    if(((i-1)%4)==0) {
      printf(" ");
    }
  }
  printf("\n");
  system("pause");
}
