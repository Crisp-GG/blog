#include <stdio.h>
#include <string.h>

int main(){
  char str[] = "hello world!!";
  char buffer[30];

  memset(buffer, 0, 20);
  memmove(buffer, str, strlen(str));

  printf("*************************\n");

  printf("str addr : %x\n", str);
  printf("buffer addr : %x\n", buffer);

  printf("str: [%s]\n", str);
  printf("buffer: [%s]\n", buffer);

  memcpy(&buffer[6], buffer, sizeof(buffer));

  printf("changed buffer: [%s]\n", buffer);
  printf("*************************\n");
  return 0;
}
