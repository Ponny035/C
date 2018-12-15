#include<stdio.h>
#include<math.h>

int primeCheck (int n);
void sievePrime (int n);

int main(void) {
  int input;
  int check;
  printf("Input your number: ");
  scanf("%d",&input);
  check = primeCheck(input);
  sievePrime(input);
  return 0;
}

int primeCheck (int n) {
  for (int i=2;i<sqrt(n) ;i++ ) {
    if ((n%i)==0) {
      return 0;
    }
  }
  return 1;
}

void sievePrime (int n) {
  int isPrime = primeCheck(n);
  if(isPrime) {
    int isPrint = 0;
    int m =n+1;
    while (!isPrint) {
      int check = primeCheck(m);
      if (check) {
        printf("%d\n",m);
        isPrint = 1;
      }
      m++;
    }
  }
  else {
    int isNotprime[n];
    for (int i = 2; i < n; i++) {
      isNotprime[i] = 0;
    }
    int i=2;
    while(i<sqrt(n)) {
      if(!isNotprime[i]) {
        int j = i*i;
        while(j<n) {
          isNotprime[j]=1;
          j+=i;
        }
      }
      i++;
    }
    for (int j=2;j<n ;j++) {
      if (!isNotprime[j]) {
        printf("%d\n",j);
      }
    }
  }
}
