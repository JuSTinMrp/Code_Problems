#include<stdio.h>

void main(int argc, char *argv[], char *envp[]){
    int i;
    for (i=0; envp[i] != NULL; i++){
        printf("%s\n", envp[i]);
    }
}