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
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        fprintf(stderr,"Error");
        return 1;
    }
    else{
        DIR *d;
        struct dirent *e;
        chdir(argv[1]);
        d = opendir(".");
        while ((e=readdir(d))!=NULL)
        {
            printf("%s\n", (*e).d_name);
        }
        closedir(d);
        return 0;
    }

}