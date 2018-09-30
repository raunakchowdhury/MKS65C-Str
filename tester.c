#include "mystr.c"
#include <stdio.h>
#include <string.h>

int main(){
  char* src = "hello";
  char dest1[256] = "hi";
  char dest2[256] = "hi";
  printf("Battery of Tests: \n");
  printf("======String length======\n");
  char name[] = "Imad";
  char name2[] = "Raunak";
  printf("String : %s\nstrlen: %lu\nmystrlen: %d\n", src, strlen(src), my_strlen(src));
  printf("String : %s\nstrlen: %lu\nmystrlen: %d\n", dest1, strlen(dest1), my_strlen(dest1));
  printf("String : %s\nstrlen: %lu\nmystrlen: %d\n", dest2, strlen(dest2), my_strlen(dest2));
  printf("String : %s\nstrlen: %lu\nmystrlen: %d\n", name, strlen(name), my_strlen(name));
  printf("String : %s\nstrlen: %lu\nmystrlen: %d\n", name2, strlen(name2), my_strlen(name2));

  printf("======String copy======\n");
  char tempdest[256] = "hi";
  char array1[256];
  char second_array1[256];
  char* array2 = "henlo";
  char* second_array2 = "henlo";
  char* temp_array1 = "";
  strcpy(dest1,src);
  my_strcpy(dest2,src);
  printf("Src: %s\nDest: %s\nstrcpy: %s\nmystrcpy: %s\n", src, tempdest, dest1, dest2);
  strcpy(array1,array2);
  my_strcpy(second_array1,second_array2);
  printf("Src: %s\nDest: %s\nstrcpy: %s\nmystrcpy: %s\n", array2, temp_array1, array1, second_array1);

  printf("======String n cat======\n");
  char tempdest2[256] = "Homer";
  src = "Doh";
  char dest3[256] = "Homer";
  char dest4[256] = "Homer";
  strncat(dest3, src, 5);
  my_strncat(dest4, src, 5);
  printf("Src: %s\nDest: %s\nstrncat: %s\nmystrncat: %s\n", src, tempdest2, dest3, dest4);
  strncat(dest1, dest3, 8);
  my_strncat(dest2, dest3, 8);
  printf("Src: %s\nDest: %s\nstrncat: %s\nmystrncat: %s\n", dest3, "hello", dest1, dest2);

  printf("======String char at======\n");
  printf("String: %s\nchr: %c\nstrchr: %s\nmystrchr: %s\n", src, 'D', strchr(src, 'D'), my_strchr(src, 'D'));
  printf("String: %s\nchr: %c\nstrchr: %s\nmystrchr: %s\n", dest1, 'i', strchr(dest1, 'i'), my_strchr(dest1, 'i'));
  printf("String: %s\nchr: %c\nstrchr: %s\nmystrchr: %s\n", name, 'e', strchr(name, 'e'), my_strchr(name, 'e'));
  printf("String: %s\nchr: %c\nstrchr: %s\nmystrchr: %s\n", name2, 'e', strchr(name2, 'e'), my_strchr(name2, 'e'));
  printf("String: %s\nchr: %c\nstrchr: %s\nmystrchr: %s\n", dest3, 'e', strchr(dest3, 'e'), my_strchr(dest3, 'e'));

  printf("======String compare======\n");
  src = "henlo";
  char* dest5 = "bob";
  char* dest6 = "goat";
  printf("Strings : %s and %s\nstrcmp: %d\nmystrcmp: %d\n", src, dest5, strcmp(src, dest5), my_strcmp(src, dest5));
  printf("Strings : %s and %s\nstrcmp: %d\nmystrcmp: %d\n", src, dest6, strcmp(src, dest6), my_strcmp(src, dest6));
  printf("Strings : %s and %s\nstrcmp: %d\nmystrcmp: %d\n", src, name, strcmp(src, name), my_strcmp(src, name));
  printf("Strings : %s and %s\nstrcmp: %d\nmystrcmp: %d\n", name2, dest5, strcmp(name2, dest5), my_strcmp(name2, dest5));
  printf("Strings : %s and %s\nstrcmp: %d\nmystrcmp: %d\n", dest6, dest5, strcmp(dest6, dest5), my_strcmp(dest6, dest5));
}
