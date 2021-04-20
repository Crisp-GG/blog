#include <stdio.h>
#include <string.h>

int main(){
  char str[] = "hello world!!";
  char buffer[20];

  memset(buffer, 0, 20);
  memcpy(buffer, str, strlen(str));

  printf("*************************\n");

  printf("str addr : %x\n", str);
  printf("buffer addr : %x\n", buffer);

  printf("str: [%s]\n", str);
  printf("buffer: [%s]\n", buffer);
  printf("*************************\n");

  return 0;
}
