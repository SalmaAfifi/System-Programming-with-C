/*Write a C program, in which you define a function without 
any parameter. The function randomly returns an 
English letter character. The probability of the lowercase letters 
must be the double than the probability of uppercase letters. 
(The character should not be the same for each run.) 
Call the function in the main program unit and print the returned value. 
(Hint: ‘a’ is 97 and ‘A’ is 65.)*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void random_letter(){
srand(time(NULL));
int a = 'a';
int z = 'z';
int A = 'A';
int Z = 'Z';
double prop = (double)rand()/(double)RAND_MAX;
//printf("%f", prop);
double third = 1.0/3;
//printf("%f", third);
if (prop<=third){
     char letter = rand()%(Z-A+1)+A;
    printf("%c\n",letter);
}
if(prop>third) {
    //printf("lowercase");
    char letter = rand()%(z-a+1)+a; 
    printf("%c\n",letter);
}
}

int main(int argc, char argv[]){
random_letter();
return 0;
}