
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<signal.h>

int  main(int argc, char *argv[]){
    if (argc == 1)
    {   fprintf(stderr, "Error");
        return 1;
    }
    else{
        struct stat i;
        stat(argv[1], &i);
        if(i.st_mode&S_IFREG){
            printf("File\n");
            return 0;
        }
        if(i.st_mode&S_IFDIR){
        printf("Directory\n");
        return 0;
        }
        else{
            printf("None\n");
            return 0;
        }

        
    }

}