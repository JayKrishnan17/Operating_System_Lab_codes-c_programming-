#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>

struct dirent *dptr;

int main (int argc, char *argv[]){
        char buff[100];
        struct stat stats;
        DIR *dirp;
        printf("Enter the directory name : ");
        scanf("%s", buff);

        if((dirp=opendir(buff)) == NULL){
        printf("The given directory doesnot exist \n");
        exit(1);
        }

        while(dptr = readdir(dirp)){
        printf("%s\n", dptr->d_name);
        }
closedir(dirp);
}