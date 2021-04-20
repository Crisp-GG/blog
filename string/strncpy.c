#include <stdio.h>
#include <string.h>

int main(){
  char str1[13] = "hello world!!";
  char str2[20] = {0};
  char * des = NULL;

  memset(str2, 0x30, 19);

  printf("*************************\n");
  printf("[before addr and str]\n");
  printf("str1 addr : %x\n", str1);
  printf("str2 addr : %x\n", str2);

  printf("str1: [%s]\n", str1);
  printf("str2: [%s]\n", str2);
  printf("des: [%s]\n", des);

  des = strncpy(str2, str1, 14);

  printf("*************************\n");
  printf("[after addr and str]\n");
  printf("str1 addr : %x\n", str1);
  printf("str2 addr : %x\n", str2);
  printf("des addr : %s\n", des);

  printf("str1: [%s]\n", str1);
  printf("str2: [%s]\n", str2);
  printf("des: [%s]\n", des);

  printf("*************************\n");

  return 0;
}
