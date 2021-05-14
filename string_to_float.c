#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(int argc, char *argv[]){   
    if (argc ==1){
        return 1;
    }
    else{

        float x = atof(argv[1]);
        printf("%f\n", x);
    }
    
    return 0;
}