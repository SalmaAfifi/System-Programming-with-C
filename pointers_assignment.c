/*Write a C program, in which there is a procedure having two parameters, 
the addresses of two integer variables. The procedure swaps the content of the variables. 
Call the procedure in the main function*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>

void swap(int *first, int *second){
    int tmp = *first;
    *first = *second;
    *second = tmp;
}
int main(int argc, char *argv[]){
    int s = 5;
    int b = 10;
    int *x , *y;
    x = &s;
    y = &b;
    printf("x = %d, y = %d\n",*x,*y);
    swap(x,y);
    printf("x = %d, y = %d\n",*x,*y);
    return 0;
}