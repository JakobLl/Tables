#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINESIZE 10000
  
 int main ()  { 
  FILE *myfile = fopen ( "/file", "r" ); 

  char line[LINESIZE];
  char *token; 
  const char D[2] = "_";
    
  while(fgets(line, sizeof(line), myfile)){  
    token = strtok(line, D);
    printf(" %s\n", token); 
    
    token = strtok(NULL, D); 
    printf(" %s\n", token);
    
    token = strtok(NULL, D); 
    printf(" %s\n", token);
    
    token = strtok(NULL, D); 
    printf(" %s\n", token);
     
    token = strtok(NULL, D); 
    printf(" %s\n", token);
    
     token = strtok(NULL, D); 
    printf(" %s\n", token);
    
    token = strtok(NULL, D); 
    printf(" %s\n", token);
    
     token = strtok(NULL, D); 
    printf(" %s\n", token);
    
     token = strtok(NULL, D); 
    printf(" %s\n", token);
    
     token = strtok(NULL, D); 
    printf(" %s\n", token);
    
    token = strtok(NULL, D); 
    printf(" %s\n", token);
    
    token = strtok(NULL, D); 
    printf(" %s\n", token);
    
     token = strtok(NULL, D); 
    printf(" %s\n", token);
    
/*     token = strtok(NULL, D); 
    printf(" %s\n", token);
    
     token = strtok(NULL, D); 
    printf(" %s\n", token);
    
    token = strtok(NULL, D); 
    printf(" %s\n", token);
    
     token = strtok(NULL, D); 
    printf(" %s\n", token);        */
    } 

  fclose(myfile);
   return 0; } 
