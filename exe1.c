#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
    float peso, excesso, multa;
    	printf("Digite o peso em kg da pescaria de hoje: ");
    	scanf("%f", &peso);
    if(peso>50){
    	excesso = peso - 50;
    	multa = excesso * 4;
    	printf("Você pescou %.2fkg em excesso, e terá que pagar R$%.2f de multa.", excesso, multa);
	}
    else{
    	printf("Voce não tem multa");
	}
}
