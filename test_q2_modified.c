
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>
#include<unistd.h>
#include<signal.h>
#include<fcntl.h>


int  main(int argc, char *argv[]){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int temp[100];
    int f,i;
    int sum = 0;
  
    /*f=open("numss.txt", O_CREAT|O_TRUNC|O_WRONLY, S_IRUSR|S_IWUSR);
    write(f, a, 10*sizeof(int));
    close(f);   */
    f=open("numss.txt", O_RDONLY);
    read(f, temp,  10*sizeof(int));
    close(f);
    //int array_size = sizeof(temp)/sizeof(int);
       for(i = 0; (i<10); i++){
           sum = sum + temp[i];
       }
       printf("%d\n", sum);
        return 0;
}