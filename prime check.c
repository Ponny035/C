#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int n) {
  for (int i = 2;i < sqrt(n);i++) {
    if((n%i)==0) {
      return 0;
    }
  }
  return 1;
}

int * sieve (int input) {
  int *arr;
  arr = (int*)malloc(input);
  for(int i=0;i<input;i++){
    arr[i] = prime(i+1);
  }
  return arr;
}

int main ()
{
  int *arr;
  int input;
  scanf("%d\n", &input);
  arr = sieve(input);
  printf("%d\n",arr[0]);
  // for (int i = 0; i < input; i++) {
  //   if(arr[])
  // }
}
