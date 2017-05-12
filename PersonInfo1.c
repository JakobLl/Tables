#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINESIZE 256
  
 int main ()  { 
  FILE *myfile = fopen("filegoeshere", "r" ); 
  
  
  
  char line[LINESIZE];
  char *value; 
    
  while(fgets(line, sizeof(line), myfile)){  
    value = strtok(line, "_");
     
    printf("Name: %s\n", value); 
    value = strtok(NULL, "_"); 
    
     printf("Gender: %s\n", value);
     value = strtok(NULL, "_");
     
    printf("Birth Date: %s\n", value);
     value = strtok(NULL, "_");
    
     printf("Age: %s\n", value);
     value = strtok(NULL, "_");
    
    printf("Card Type: %s\n", value);
     value = strtok(NULL, "_");
    
    printf("Card Number: %s\n", value);
     value = strtok(NULL, "_");
    
    printf("CVV2: %s\n", value);
     value = strtok(NULL, "_");
    
    printf("Card Expiration Date: %s\n", value);
     value = strtok(NULL, "_");
    
    printf("Annual Income: %s\n", value);
     value = strtok(NULL, "\n");
    } 

  fclose(myfile);
   return 0; }
