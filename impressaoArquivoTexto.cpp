#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
FILE *fp; //inicializa��o do ponteiro
int i=1;//inicializa��o de vari�vel
float x;
fp = fopen("vetor.txt","w");
if(!fp)
           {
               printf( "Erro na abertura do arquivo");
               exit(0); 
		   }
do
   {
   x=sqrt(i);
   //int putc (int x,FILE *fp); 
   fprintf(fp,"\%f \n",x);
   i=i+2;
   }
while (i<=50);
printf("\n");


fclose (fp); 
system("PAUSE");
}



