/*Write a C program, which gets a command-line argument 
in each run. We can suppose that the first word of 
the command line arguments (excluding the name of 
the executable) is the name of a directory. 
The program must list all the objects within the given 
directory. So, it prints out the names of files and 
folders contained by the directory given in 
the command-line argument. For example, 
if “Progrs” is a subfolder in the present working 
directory the program must work in the same way as the “ls Progs/” command in Linux.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(int argc, char *argv[]){
    if(argc > 1) { 
        //char *command = strdup(strcat("cd /", argv[1]));
        char user_dir[20];
        char command[100] = "ls ";
        strcpy(user_dir, argv[1]);
        strcat(command, user_dir);
        //printf("%s", user_dir);
        //printf("%s\n", command);
        system(command);
    return 0;
}
    if (argc ==1){
        //printf(stderr, "Error");
        return 1;}

}
