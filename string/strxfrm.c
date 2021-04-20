#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
  char str1[20] = "hlava";
  char str2[20] = {0};
  char str3[2] = {0x68, 0x00};
  char xfrm3[20] = {0};
  char str4[2] = {0xC4, 0x00};
  char xfrm4[20] = {0};
  int size = 0, com = 0;
  char * result = NULL;

  size = strxfrm(str2, str1, sizeof(str1));

  printf("*************************\n");
  printf("set locale = null\n");
  printf("str1: [%s]\n", str1);
  printf("str2: [%s]\n", str2);
  printf("size: [%d]\n", size);
  printf("*************************\n");

  result = setlocale(LC_ALL, "en_US.UTF-8");
  size = strxfrm(str2, str1, sizeof(str1));

  printf("*************************\n");
  printf("set locale = %s\n", result);
  printf("str1: [%s]\n", str1);
  printf("str2: [%s]\n", str2);
  printf("size: [%d]\n", size);
  printf("*************************\n");

  result = setlocale(LC_ALL, "en_US.UTF-8");
  size = strxfrm(xfrm3, str3, sizeof(str3));
  size = strxfrm(xfrm4, str4, sizeof(str4));

  com = strcoll(xfrm3, xfrm4);
  printf("set locale = %s\n", result);
  printf("compare str3, str4: [%s, %s]\n", str3, str4);
  printf("com : [%d]\n", com);

  result = setlocale(LC_ALL, "cs_CZ.UTF-8");
  size = strxfrm(xfrm3, str3, sizeof(str3));
  size = strxfrm(xfrm4, str4, sizeof(str4));

  com = strcoll(xfrm3, xfrm4);
  printf("set locale = %s\n", result);
  printf("compare str3, str4: [%s, %s]\n", str3, str4);
  printf("com : [%d]\n", com);

  return 0;
}
