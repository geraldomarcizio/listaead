#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
{
    float areaDaParede,
        rendimentoDoLitro = 6.0,
        litrosPorLata = 18.0,
        precoDaLata = 80.0,
        precoTotal;
    int latasAComprar;

    printf("Digite a area da parede em metros quadrados: ");
    scanf("%f", &areaDaParede);

    latasAComprar = ceil(areaDaParede / (rendimentoDoLitro * litrosPorLata));
    //ceil é uma função da biblioteca matemática
    precoTotal = latasAComprar * precoDaLata;
    printf("Voce deve comprar %i lata(s), custando R$%.2f",
           latasAComprar, precoTotal);
    return 0;
}
