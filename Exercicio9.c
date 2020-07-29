/*
Escrever um programa que lê a identificação de um vendedor (um número inteiro
qualquer), o seu salário fixo, o total das vendas por ele efetuadas e o porcentual que
ganha sobre o total de vendas. Calcular o salário total do vendedor. Escrever a
identificação do vendedor e o seu salário total.
*/
#include <stdio.h>
int main(){
	int id, porcentual;
	float salarioFixo, salarioTotal, totalVendas, lucroVendas, porcentagemVendas;
	
	printf("Id do vendedor: \n");
	scanf("%i", &id);
	
	printf("\nSalário fixo: \n");
	scanf("%f", &salarioFixo);
	
	printf("\n Porcentual recebido: \n");
	scanf("%i", &porcentual);
	
	printf("\nTotal de vendas: ");
	scanf("%f", &totalVendas);
	
	porcentagemVendas = (float) porcentual/100;
	lucroVendas = totalVendas * porcentagemVendas;
	salarioTotal = salarioFixo + lucroVendas;
	
	printf("\nVendedor: %i", id);
	printf("\nSalário Total: R$ %.2f", salarioTotal);
	
	return 0;
}
