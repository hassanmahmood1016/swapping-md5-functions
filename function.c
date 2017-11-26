#include "function.h"







void md5()

{

 char string1[9] = "01234567"; //the ninth character is end of string (EOS)

 char *hash;

 printf("Enter 8 characters (0-9 and A-F): \n");

 scanf("%s", string1);

 hash = (char *)calloc(9,sizeof(char));

 for (int k = 0; k<9; ++k)

 {

hash[k] = string1[k];

 }

 printf("string1 = %s \n", string1);

 printf("hash = %s \n", hash);

 char *ptr; //dummy pointer

unsigned int int_hash;

 printf("size of int_hash %i \n", (int)sizeof(int_hash));

 int_hash = strtol(string1, &ptr, 16);

 /*The C library function void *calloc(size_t nitems, size_t size) allocates the requested memory and

 returns a pointer to it. The difference in malloc and calloc is that malloc does not set the memory

 to zero where as calloc sets allocated memory to zero.*/

 printf("int_hash in hex 0x%08x \n", int_hash);




 unsigned int read_int_hash; //uint32_t

 printf("Enter an 8 digit number (in hex 0-9 and A-F): \n");

 scanf("%x", &read_int_hash);

printf("read_int_hash in hex 0x%08x", read_int_hash);

}
