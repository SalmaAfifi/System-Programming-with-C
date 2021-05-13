/***  Example of alarm function and SIGALRM signal.  ***/
#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

void end(int sig){
   fprintf(stderr,"\n Sorry, time out!\n");
   kill(getpid(),SIGKILL);
   }

int main(){
   int a;
   signal(SIGALRM,end);
   alarm(5);
   printf(" Write an integer number within 5 seconds: ");
   scanf("%d",&a);
   printf(" %ds remained.\n I am working.\n",alarm(0));
   sleep(6); // working with the number
   printf(" The number is: %d\n",a);
   return 0;
   }
