#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

/*2- Fazer um programa para uma matriz 3x3 com os seguintes valores:
a[0][0]=1; a[0][1]=2; a[0][2]= 3 
a[1][0]=4; a[1][1]=5; a[1][2]= 6
a[2][0]=7; a[2][1]=8; a[2][2]= 9*/

int main (){
	int l,c;
	int Matriz_A[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
	
	for (l=0;l<3;l++){
		for (c=0;c<3;c++){
			printf("%d\t", Matriz_A[l][c]);
		}
	printf("\n");
	}
system("PAUSE");
}

