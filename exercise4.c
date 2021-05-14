/*Write a C program, which writes the “Leap year!”text to the screen
 if it is executed in a leap year,
 otherwise it writes the “Normal year.”text.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
typedef struct tm tm;
int main(int argc, char* argv[]){
    time_t current_time;
    time(&current_time);
    tm *local_time = localtime(&current_time);
    int year = local_time->tm_year+1900;
    printf("%d\n", year); 
    if (year%4==0){
        printf("Leap year!\n");
    }
    else{
        printf("Normal year\n");
    }
    return 0;
}