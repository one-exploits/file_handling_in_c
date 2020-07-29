#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#define and &&
#define or ||
int main(int count,char *file_name_args[]){
    if (file_name_args[0]==NULL or file_name_args[1]==NULL)
    {
       printf("\033[31m");
       printf("\nError: agument failed!\n");
       printf("\033[0m");
       exit(EXIT_FAILURE);
    }else
    {
        
      FILE *file_pointer;
      char *file_name=file_name_args[1];
    file_pointer=fopen(file_name,"r");
    if(file_pointer==NULL){
        printf("\033[31m");
        printf("\nError: file '%s' note found !\n",file_name);
        printf("\033[0m");
    }
    else
    {
      
    
    
    char charecter=fgetc(file_pointer);
    for (;;)
    {
       printf("%c",charecter);
       charecter=fgetc(file_pointer);
       if(feof(file_pointer)){
           break;
       }
    }
    fclose(file_pointer);
    }
    }
    
    return 0;
   }