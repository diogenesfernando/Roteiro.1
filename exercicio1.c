#include <stdio.h>

int main(){
    int idade;
    float preco, desconto, valor;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite o preço: \n");
    scanf("%f", &preco);

    if(idade <= 18){
        valor = preco*0.90;
        desconto = preco - valor;
    }else{
        valor = preco*0.80;
        desconto = preco - valor;
    }

    printf("Desconto: %.2f\n"
            "Valor: %.2f\n", desconto, valor);
    return 0;
}
