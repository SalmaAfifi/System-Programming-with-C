/*Write a C program, which prints the following information about 
itsLinux environment:
Its  recentname(take  into  account  that  the  name  of  executable  file  can  change  after compilation).
The current working directory, where the program is executed.
The current timein a readable form.The login name of 
the user,who executes the program.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(int argc, char* argv[]){
    time_t t;
    time(&t);
    char *readable_time = strdup(ctime(&t));
    printf("%s\n", argv[0]);
    printf("%s\n", getenv("PWD"));
    printf("%s\n", getenv("LOGNAME"));
    printf("%s\n", readable_time);
    return 0;
}
