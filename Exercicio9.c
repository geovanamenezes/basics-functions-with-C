/*
Escrever um programa que l� a identifica��o de um vendedor (um n�mero inteiro
qualquer), o seu sal�rio fixo, o total das vendas por ele efetuadas e o porcentual que
ganha sobre o total de vendas. Calcular o sal�rio total do vendedor. Escrever a
identifica��o do vendedor e o seu sal�rio total.
*/
#include <stdio.h>
int main(){
	int id, porcentual;
	float salarioFixo, salarioTotal, totalVendas, lucroVendas, porcentagemVendas;
	
	printf("Id do vendedor: \n");
	scanf("%i", &id);
	
	printf("\nSal�rio fixo: \n");
	scanf("%f", &salarioFixo);
	
	printf("\n Porcentual recebido: \n");
	scanf("%i", &porcentual);
	
	printf("\nTotal de vendas: ");
	scanf("%f", &totalVendas);
	
	porcentagemVendas = (float) porcentual/100;
	lucroVendas = totalVendas * porcentagemVendas;
	salarioTotal = salarioFixo + lucroVendas;
	
	printf("\nVendedor: %i", id);
	printf("\nSal�rio Total: R$ %.2f", salarioTotal);
	
	return 0;
}
