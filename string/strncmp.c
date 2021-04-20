#include <stdio.h>
#include <string.h>

int main(){
  char str1[20] = "HELLO";
  char str2[20] = "HELIX";
  char str3[20] = "HELLO";
  char *p;
  int ret = 0;

  ret = strcmp(str1, str2);
  printf("/%s/ > /%s/ : %d\r\n", str1, str2, ret);

  ret = strcmp(str2, str1);
  printf("/%s/ < /%s/ : %d\r\n", str3, str2, ret);

  ret = strcmp(str1, str3);
  printf("/%s/ = /%s/ : %d\r\n", str3, str2, ret);

  return 0;
}


