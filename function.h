/*  C Program to compute the average of a list of numbers. */

#include <stdio.h>




void main(void) 

{

  int value,total = 0,count = 0;




  /* fileptrIn and fileptrOut are variables of type “FILE *” */

  FILE * fileptrIn, * fileptrOut;

  char lastnames.datIn[100],out_hashes_SM.datOut[100];

  printf("Please enter an input filename (use path if needed):");

  scanf("%s",lastnames.datIn);

  printf("Please enter an output filename (use path if needed):");

  scanf("%s",out_hashes_SM.datOut);




  /* open files to read “r” and write “w”  */

  fileptrIn = fopen(lastnames.datIn, "r");

  fileptrOut = fopen(out_hashes_SM.datOut, "w");
