//Write  a  C  program,  which  prints  out  its  first  command  line  argument  (argv[1])  
//using  uppercase letter characters instead of lowercase ones. If there is no command line argument 
//the program should return by 1.

# include <stdio.h>
# include<ctype.h>
#include <string.h>

int main(int argc, char* argv[]){
    if(argc > 1){

        int i =0;
        for(i;i<strlen(argv[1]);i++){

        printf("%c",toupper(argv[1][i]));
        }
        printf("\n");
        return 0;
    }
    return 1;

}
