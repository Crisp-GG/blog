#include <stdio.h>
#include <string.h>

int main(){
  char str1[20] = "HELlo world!!";
  char str2[20] = "HELLO WORLD!!";
  char str3[20] = "HELLO WORLD!!";
  char *p;
  int ret = 0;

  ret = memcmp(str1, str2, 20);

  printf("/%s/ > /%s/ : %d\r\n", str1, str2, ret);

  ret = memcmp(str2, str1, 20);

  printf("/%s/ < /%s/ : %d\r\n", str2, str1, ret);

  ret = memcmp(str2, str3, 20);

  printf("/%s/ == /%s/ : %d\r\n", str2, str3, ret);

  p = str1;
  printf("str1 : ");
  for(int i = 0; i<25; i++){
   printf("%c ", *p);
   p++;
  }
  printf("\r\n");

  p = str2;
  printf("str2 : ");
  for(int i = 0; i<25; i++){
   printf("%c ", *p);
   p++;
  }
  printf("\r\n");

  ret = memcmp(str1, str2, 25);

  printf("/%s/ == /%s/ : %d\r\n", str1, str2, ret);

  return 0;
}


