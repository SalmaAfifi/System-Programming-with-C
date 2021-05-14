/*There is a file containing integer numbers 
(each integer is followed by a newline character). 
The number of integers is unknown. 
The file is called “nums.txt”. Write a C program 
to calculate the sum of the integers 
and write it to the end of the file..*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<signal.h>

void create_file(){
        int i = 1;
    FILE *f;
    f = fopen("nums.txt", "w");
    for(i; i <=5; i++){
        fprintf(f, "%d\n", i);
    }
    fclose(f);
}

int  main(int argc, char *argv[]){
    int sum = 0;
    int tmp;
    create_file();
    FILE *f;
    f = fopen("nums.txt", "a+");
    //printf("file has been opend");
    while(!feof(f)){
        fscanf(f, "%d\n", &tmp);
        sum = sum + tmp;
    }
    fprintf(f, "%d\n", sum);
    fclose(f);
    return 0;
}