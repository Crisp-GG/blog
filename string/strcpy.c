#include <stdio.h>
#include <string.h>

int main(){
  char *str1 = "hello world!!";
  char *str2 = NULL;
  char * des;

  printf("str2 addr : %x\n", str2);

  des = strcpy(str2, str1);

  printf("*************************\n");

  printf("str1 addr : %x\n", str1);
  printf("str2 addr : %x\n", str2);
  printf("des addr : %x\n", des);

  printf("str1: [%s]\n", str1);
  printf("str2: [%s]\n", str2);
  printf("des: [%s]\n", des);

  printf("*************************\n");

  return 0;
}
