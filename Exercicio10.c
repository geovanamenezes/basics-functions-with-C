/*
10. Escreva um programa que leia três números inteiros
e positivos (A, B, C) e calcule a
seguinte expressão:
D = (R + S) / 2
Sendo R = (A + B)2
e S = (B + C) 2
.
*/

#include <stdio.h>
int main(){
	int A, B, C, S, R;
	float  D;
	
	printf("A: \n");
	scanf("%i", &A);
	
	printf("\nB: \n");
	scanf("%i", &B);
	
	printf("\nC: \n");
	scanf("%i", &C);

	R = ((A+B) * (A+B));
	S = ((B+C) * (B+C));
	
	D = (float) ((R+S)/2);
	
	printf("\nD = %.2f", D);
	
	
	
	
	return 0;
}
