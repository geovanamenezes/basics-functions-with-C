/*
– Um trabalhador recebe R$ 50,00 por dia trabalhado. Ao receber, são
descontados 8% de impostos. Escreva um programa que receba o número de dias
trabalhado e informe o quanto deve ser pago ao trabalhador.
*/

int main(){
	
	int qtdDiasTrabalhados;
	float impostos, salarioFinal;
	
	printf("Quantidade de dias trabalhados:\n");
	scanf("%i", &qtdDiasTrabalhados);
	
	impostos = (float)(qtdDiasTrabalhados*50)*0.08;
	salarioFinal = (float)(qtdDiasTrabalhados*50) - impostos;
	
	printf("\nQuantidade que o trabalhador deve receber: R$ %.2f", salarioFinal );
	
	return 0;
	
}
