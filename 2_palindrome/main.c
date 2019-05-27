#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 50

int stack[LEN], top = -1, under = 0;

void push(char letter) {
  top++;
  stack[top] = letter;
}

void pop() {
  top--;
}

void is_palindrome(char str[]) {
  int i;
  for(i = 0; str[i] != '\0'; i++) push(str[i]);

  for(i = 0; i < strlen(str); i++) {
    if(stack[top] == stack[under]) { pop(); under++; }
    else { printf("[%s] nao eh palindromo\n", str); break; }
  }

  if(strlen(str) == under)
    printf("[%s] eh palindromo\n",  str);
  top = -1; under = 0;
}

int main(int argc, char const *argv[]) {

  int i;
  char string[LEN];

  while(1) {
    printf("\nCheck Palindrome!\n");
    printf("Digite uma string:\n");
    scanf("%s", string);
    if(strcmp(string, "fim") == 0) break;

    is_palindrome(string);
  }


  printf("\nFIM DO PROGRAMA!\n");


  return 0;
}
