/*Write a C program, in which you define a procedure having 4 parameters. The first two parameters are integers, the first one plays the role of the dividend (numerator) 
and the second one is the divisor (dominator) 
of a division. The procedure must determine both 
the integer part of the quotient and reminder and 
they must be provided to the caller via parameter passing
by pseudo-address using the third and fourth parameters 
as output parameters. Call the procedure using the 60 and 8 as input parameters and in the main program unit print out the results (7 and 4).*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<signal.h>

void devision(int num, int den, int *integ, int *reminder){
*reminder = num % den;
num = num - (*reminder);
*integ = num/den;

};

int  main(int argc, char *argv[]){
    int num = 60;
    int den = 8;
    int integ, reminder;
    devision(num, den, &integ, &reminder);
    printf("the result of the devision is %d and %d\n", integ, reminder);

}