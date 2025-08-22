#include <stdio.h>

int busca_binaria(int v[], int n, int alvo) {
    int ini = 0, fim = n - 1;
    while (ini <= fim) {
        int meio = ini + (fim - ini) / 2; // evita overflow
        if (v[meio] == alvo) {
            return meio; // ocorrência encontrada (não necessariamente a primeira)
        } else if (v[meio] < alvo) {
            ini = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    int v[] = {7, 13, 23, 42, 42, 99};
    int n = sizeof(v) / sizeof(v[0]);
    int alvo;
    printf("Digite o valor a buscar (binaria): ");
    scanf("%d", &alvo);
    int idx = busca_binaria(v, n, alvo);
    if (idx == -1) {
        printf("Valor %d nao encontrado.\n", alvo);
    } else {
        printf("Valor %d encontrado em alguma ocorrencia (indice %d).\n", alvo, idx);
    }
    return 0;
}
