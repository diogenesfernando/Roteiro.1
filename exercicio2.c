#include <stdio.h>

int main(){
 	float bruto, desc, liq;
	
	printf("Digite o salario bruto: \n");
	scanf("%f", &bruto);

	if(bruto <= 420){
		desc = bruto * 0.08;
		liq = bruto * 0.92;
	} else if((bruto > 420) && (bruto <= 1350)){
		desc = bruto * 0.09;
		liq = bruto * 0.91;
	}else if(bruto > 1350){
		desc = bruto * 0.1;
		liq = bruto * 0.9;
	}
	printf("Desconto do INSS: %.2f\n"
		"Salario liquido: %.2f\n", desc, liq);
    return 0;
}
