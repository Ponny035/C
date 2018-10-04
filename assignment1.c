#include<stdio.h>
int main () {
  int digits[9];
  for(int i=0; i<9; i+=3) {
    int input;
    printf("Let input your number :");
    scanf("%d", &input);
    while((input<100)||(input>999)){
      printf("Input miss match please input your new number :");
      scanf("%d", &input);
    }
    digits[i]=input%10;
    input = input/10;
    digits[i+1]=input%10;
    input = input/10;
    digits[i+2]=input;
  }
  for(int i=0;i<8;i++) {
    int min = i;
    int temp;
    for (int j = i+1; j<8; j++) {
      if(digits[j]<digits[min]) {
        min = j;
      }
    }
    temp = digits[i];
    digits[i] = digits[min];
    digits[min] = temp;
  }
  for(int i=0; i<8;i++) {
    printf("%d ", digits[i]);
  }
  printf("\n");
}
