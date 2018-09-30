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
  while(*src && n){ // copy up to n
    *dest = *src;
    dest++;
    src++;
    n--;
  }
  return origin;
}

char * my_strchr( char *s, char c ){
  while(*s){
    if (c == *s){
      return s;
    }
    s++;
  }
  return s; //returns the null terminator
}

int my_strcmp( char *s1, char *s2 ){
  while(*s1 && *s2){
    if(*s1 > *s2){
      return ((int)(*s1) - (int)(*s2));
    }
    else if(*s2 > *s1){
      return ((int)(*s1) - (int)(*s2));
    }
    s1++;
    s2++;
  }
  return 0;
}

/*
int main(){
  char* src = "hello";
  char dest[256] = "hello";
  printf("Source: %s\nDest: %s\n",my_strcpy(dest,src),dest);
  printf("Source: %s\nDest: %s\n",my_strncat(dest,src, 7),dest);
  printf("Source: %s\nLoc: %c\n",src,*my_strchr(src,'e'));
  printf("Source: %s\nLoc: %c\n",src,*my_strchr(src,'p'));
  printf("s1: %s\ns2: %s\ncmp: %d\n",src,dest,my_strcmp(src,dest));
  return 0;

}*/
