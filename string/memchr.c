#include <stdio.h>
#include <string.h>

int main(){
  char str[] = "hello world!!";
  int count = 0;

  char * ptr = (char *)memchr(str, 'l', strlen(str));
  if(ptr != NULL){
    printf("1. normal memchr usage...\n\n");
    printf("return ch : %c\n", *ptr);
    printf("ch position : %d\n", (int)(ptr - str + 1));
  }

  ptr = str;

  printf("\n2. extend memchr usage...\n\n");
  while(1){
    ptr = (char *)memchr(ptr, 'l', strlen(ptr));
    if(ptr != NULL) count++;
    else break;
    printf("left... : %s\n", ptr);
    ptr++;
  }

  printf("total '%c' count : %d\n", 'l', count);


  return 0;
}


