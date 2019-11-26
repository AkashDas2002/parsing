
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <dirent.h>

char ** parse_args( char * line ){
  char *s1 = line;
  while(s1 != NULL){
    printf("[%s]\n", strsep( &s1, " -" ));
  }
}

int main(){
  char line[100] = "woah-this-is-cool";
  char *s1 = line;
  while(s1 != NULL){
      printf("[%s]\n", strsep( &s1, "-" ));
  }

  return 0;
}
