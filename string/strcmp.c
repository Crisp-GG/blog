#include <stdio.h>
#include <string.h>

int main(){
  char str1[20] = "HELlo world!!";
  char str2[20] = "HELLO WORLD!!";
  char str3[20] = "HELLO WORLD!!!!!";
  char *p;
  int ret = 0;

//  ret = strcmp(str1, str2);

//  printf("/%s/ > /%s/ : %d\r\n", str1, str2, ret);

  ret = strcmp(str3, str2);

  printf("/%s/ > /%s/ : %d\r\n", str3, str2, ret);

  ret = strcmp(str2, str3);

  printf("/%s/ < /%s/ : %d\r\n", str2, str3, ret);

  return 0;
}


