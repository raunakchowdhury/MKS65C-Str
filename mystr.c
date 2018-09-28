#include "mystr.h"
#include <stdio.h>
int my_strlen(char* str){
  int num = 0;
  while(*str){
    num++;
    str++;
  }
  return num;
}

char* my_strcpy(char* dest, char* src){
  char* origin = src;
  while(*src){
    *dest = *src;
    dest++;
    src++;
  }
  return origin;
}

char* my_strncat(char* dest, char*src, int n){
  char* origin = src;
  while(*dest){
    dest++;
  }
  while(*src || n){
    *dest = *src;
    dest++;
    src++;
    n--;
  }
  return origin;
}

int main(){
  char* src = "hello";
  char dest[256];
  printf("Source: %s\nDest: %s\n",my_strcpy(dest,src),dest);
  printf("Source: %s\nDest: %s\n",my_strncat(dest,src, 1),dest);
  return 0;
}
