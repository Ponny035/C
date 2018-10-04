#include<stdio.h>
#include<stdlib.h>
int main() {
  int page;
  printf("Input your page. : ");
  scanf("%d",&page);
  if((page>=4)&&((page%4)==0)) {
    int paper = page/4;
    printf("You need %d paper",paper);
    if(paper>1) {
      int listback=page;
      int listfrist=1;
      printf("s.\n");
      for(int i=1; i<=paper; i++) {
        printf("Paper %d\n",i);
        printf("BackLeft  : %d\tBackRight  : %d\n",listfrist,listback);
        printf("FrontLeft : %d\tFrontRight : %d\n",listfrist+1,listback-1);
        listfrist=listfrist+2;
        listback=listback-2;
        printf("\n");
      }
    }
    else {
      printf(".\n");
      printf("Paper 1\n");
      printf("BackLeft  : 1\tBackRight  : 4\n");
      printf("FrontLeft : 2\tFrontRight : 3\n");
    }
  }
  else {
    printf("You can't print out it.\n");
  }
  system("pause");
  return 0;
}
