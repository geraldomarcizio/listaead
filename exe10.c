#include <stdio.h>
int main()
{
    printf("\nLojas Tabajara\n");
    float total = 0, dinheiro, valor = 0;
    int produto = 0;

    while (valor=0)
    {
        printf("Produto %d: R$ ", produto);
        scanf("%f", &valor);
        produto++;
        if (valor == 0)

        total += valor;
    }

    printf("Total: R$ %.2f", total);
    printf("\nDinheiro: R$ ");
    scanf("%f", &dinheiro);
    printf("Troco: %.2f", dinheiro - total);

}
