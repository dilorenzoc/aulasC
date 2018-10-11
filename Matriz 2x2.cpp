#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main (){
	int l,c;
	int Matriz_A[2][2] = {{5,2},{7,6}};
	
	for (l=0;l<2;l++){
		for (c=0;c<2;c++){
			printf("%d\t", Matriz_A[l][c]);
		}
	printf("\n");
	}
system("PAUSE");
}
