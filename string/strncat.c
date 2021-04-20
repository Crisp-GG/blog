#include <stdio.h>
#include <string.h>

static void print_str(char * note, char * _str1, char * _str2, char * _des){
  printf("*************************\n");
  printf("[%s addr and str]\n", note);
  printf(" - str1 addr : %x\n", _str1);
  printf(" - str2 addr : %x\n", _str2);
  printf(" - des addr : %x\n\n", _des);

  printf(" - str1: [%s]\n", _str1);
  printf(" - str2: [%s]\n", _str2);
  printf(" - des: [%s]\n", _des);
  printf("*************************\n");
}

int main(){
  char str1[20];
  char str2[20] = "world!!";
  char * des = NULL;

  memset(str1, 0x30, 20);
  memcpy(str1, "hello ", 6);

  print_str("before", str1, str2, des);

  des = strncat(str1, str2, 7);

  print_str("after", str1, str2, des);

  return 0;
}


