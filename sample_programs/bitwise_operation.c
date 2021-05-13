/*** Example of bit operations ***/
#include<stdio.h>

int main(){
  char c; // signed

  c=64|1;
  printf("%c",c);

  c=65&255;
  printf("%c",c);

  c=190^255;
  printf("%c",c);

  c=~191;
  printf("%c",c+1);

  c=1;
  c=c<<6;
  printf("%c",c+1);

  c=128;
  c=c>>1;
  printf("%c\n",c+1-128);

  return 0;
  }
