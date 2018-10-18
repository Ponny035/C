#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
   char firstName[50];
   char midName[50];
   char lastName[50];
   char phone[14];
   char mount[4];
   char year[5];
};
// void edit(int i, struct student &st);
void printStudent(struct student *kid);
//delete
int main(int argc, char const *argv[]) {
  setbuf(stdin,NULL);
  setbuf(stdout,NULL);
  int number;
  int *p;
  printf("How many record of student? : " );
  scanf("%d",&number);
  char no[2] = "no";
  char temp[50];
  struct student child[number];
  for (int i = 0; i < number; i++) {
    printf("Student No.%d\n",i+1);
    printf("Student no.%d first name? : ",i+1);
    scanf("%50s",temp );
    strcpy( child[i].firstName, temp);
    printf("Student no.%d middle name? (enter \"no\" if student  didn't have it) : ",i);
    scanf("%50s",temp );
    if(strcmp(temp, no)!=0) {
        strcpy( child[i].midName, temp);
    }
    printf("Student no.%d last name? : ",i+1);
    scanf("%50s",temp );
    strcpy( child[i].lastName, temp);
    printf("Student no.%d Phone Number? : ",i+1);
    scanf("%14s",temp );
    strcpy( child[i].phone, temp);
    printf("Student no.%d birth mount? (DEC) : ",i+1);
    scanf("%3s",temp );
    strcpy( child[i].mount, temp);
    printf("Student no.%d birth year? (1999) : ",i+1);
    scanf("%4s",temp );
    strcpy( child[i].year, temp);
    printf("\n");
  }
  printf("Student\n");
  for (int i = 0; i < number; i++) {
    printStudent(&child[i]);
    printf("\n");
  }
  int i;
  printf("Do you want to edit student put No.? (0 if don't want to edit) : " );
  scanf("%d", &i);
  if((i-1)>=0) {
    i--;
    int cases;
    printf("Edit student no.%d\n", i);
    printf("What do you want to edit\n");
    printf("1.Firstname\n");
    printf("2.Midname\n");
    printf("3.Lastname\n");
    printf("4.Phone number\n");
    printf("5.Mount\n");
    printf("6.Year\n");
    printf("Input your number : ");
    scanf("%d", &cases);
    switch (cases) {
      case 1:
        printf("Student no.%d first name? : ",i+1);
        scanf("%50s",temp );
        strcpy(child[i].firstName, temp);
        break;
      case 2:
        printf("Student no.%d middle name? (enter \"no\" if student  didn't have it) : ",i);
        scanf("%50s",temp );
        if(strcmp(temp, no)!=0) {
          strcpy( child[i].midName, temp);
        }
        break;
      case 3:
        printf("Student no.%d last name? : ",i+1);
        scanf("%50s",temp );
        strcpy( child[i].lastName, temp);
        break;
      case 4:
        printf("Student no.%d Phone Number? : ",i+1);
        scanf("%14s",temp );
        strcpy( child[i].phone, temp);
        break;
      case 5:
        printf("Student no.%d birth mount? (DEC) : ",i+1);
        scanf("%3s",temp );
        strcpy( child[i].mount, temp);
        break;
      case 6:
        printf("Student no.%d birth year? (1999) : ",i+1);
        scanf("%4s",temp );
        strcpy( child[i].year, temp);
        printf("\n");
        break;
    }
    printf("New in formation is :\n");
    printStudent(&child[i]);
    printf("\n");
  }
  printf("Do you want to delete student data (0 if don't want to delete) : " );
  scanf("%d", &i);
  if((i-1)>=0) {
    char delete;
    printf("Do you want to delete all data (0 if don't want to delete) : " );
    scanf("%d", &i);
    if(i==0) {
      printf("Which student No. do you want to delete ? : " );
      scanf("%d", &i);
      if((i-1)>=0) {
        i--;
        delete = '0';
        printf("hello\n");
        strcpy(child[i].firstName,&delete);
        strcpy( child[i].midName, &delete);
        strcpy( child[i].lastName, &delete);
        strcpy( child[i].phone, &delete);
        strcpy( child[i].mount, &delete);
        strcpy( child[i].year, &delete);
      }
    }
    else {
      for (int i = 0; i < number; i++) {
        delete = '0';
        printf("hello\n");
        strcpy(child[i].firstName,&delete);
        strcpy( child[i].midName, &delete);
        strcpy( child[i].lastName, &delete);
        strcpy( child[i].phone, &delete);
        strcpy( child[i].mount, &delete);
        strcpy( child[i].year, &delete);
      }
    }
    printf("Your data has been delete\n" );
  }
  for (int i = 0; i < number; i++) {
    printStudent(&child[i]);
    printf("\n");
  }
  return 0;
}

// void edit (int i, struct student st) {
//   printf("%d\n", st);
//   printStudent(&st[i]);
//   int cases;
//   char no[2] = "no";
//   char temp[50];
//   printf("Edit student no.%d\n", i);
//   printf("What do you want to edit\n");
//   printf("1.Firstname\n");
//   printf("2.Midname\n");
//   printf("3.Lastname\n");
//   printf("4.Phone number\n");
//   printf("5.Mount\n");
//   printf("6.Year\n");
//   printf("Input your number : ");
//   scanf("%d", &cases);
//   switch (cases) {
//     case 1:
//       printf("Student no.%d first name? : ",i+1);
//       scanf("%50s",temp );
//       strcpy(st[i].firstName, temp);
//       break;
//     case 2:
//       printf("Student no.%d middle name? (enter \"no\" if student  didn't have it) : ",i);
//       scanf("%50s",temp );
//       if(strcmp(temp, no)!=0) {
//         strcpy( st[i].midName, temp);
//       }
//       break;
//     case 3:
//       printf("Student no.%d last name? : ",i+1);
//       scanf("%50s",temp );
//       strcpy( st[i].lastName, temp);
//       break;
//     case 4:
//       printf("Student no.%d Phone Number? : ",i+1);
//       scanf("%14s",temp );
//       strcpy( st[i].phone, temp);
//       break;
//     case 5:
//       printf("Student no.%d birth mount? (DEC) : ",i+1);
//       scanf("%3s",temp );
//       strcpy( st[i].mount, temp);
//       break;
//     case 6:
//       printf("Student no.%d birth year? (1999) : ",i+1);
//       scanf("%4s",temp );
//       strcpy( st[i].year, temp);
//       printf("\n");
//       break;
//   }
//   printf("New in formation is :\n");
//   //printStudent(&st[i]);
// }

void printStudent (struct student *kid) {
  printf("Student name : %s %s %s\n", kid->firstName , kid->midName, kid->lastName );
  printf("Student Phone Number : %s\n", kid->phone);
  printf("Student birth mount and year : %s %s\n", kid->mount, kid->year);
}
