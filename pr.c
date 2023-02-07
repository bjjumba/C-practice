#include<stdio.h>
#include<string.h>

int main(){
   // for(int row=1;row<=6;row++){
   //  for(int col=1;col<=row;col++){
   //     printf("%d",col);
   //  }
   //  printf("\n");

   // }

   // int year=2023;
   // int *pty=&year;
   // printf("%d",*pty+3);
   // *pty=2050;
   // printf("\n%d",*pty);

   FILE *fp;
   char *msg;
   msg="The Sunshine January 2023";
   fp=fopen("me.txt","w");
   if(fp!=NULL)
   for(int i=0; i<strlen(msg); i++)
   putc(*(msg+i),fp);
   fclose(fp);
   return 0;
}