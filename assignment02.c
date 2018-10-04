#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  char string[3],ch;
  int number;
  int ans;
  int *p;
  p = &ans;
  scanf("%s",string);
  scanf("%d",&number);
  for(int i=0;i<3;i++) {
    if(string[i]>=97) {
      string[i] = string[i]-32;
    }
    ans = ans+string[i];
  }
  int loop = number;
  while (loop%10>0) {
    int temp=(loop%10)+48;
    ans = ans+temp;
    loop = loop/10;
  }
  printf("the summation of %s %d is %d\n", string, number, *p);
  return 0;
}
