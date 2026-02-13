#include <stdio.h>

char grade; // only stores 1 character

int main() {
  printf("Input your grade\n");
  scanf("%c",&grade); // Takes input from user

  printf("Your grade is: %c",grade); //Prints grade entered as a char
  return 0;
}
