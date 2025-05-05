#include <stdio.h>

int fat(int n) {
    int fat = 1;
    
    while (n > 1) {
        fat *= n;
        n --;
    }
    return fat;
}

float eulerNumber(int n) {
    float euler = 1.0;
    for (int i = 1; i < n; i++) {
       euler += 1.0/(fat(i));
    }
    return euler;
}

int main() {
    int n;
    
    printf("Digite um número para calcular seu número de Euler: ");
    scanf("%d", &n);
    
    printf("Resultado: %.2f", eulerNumber(n));
    
    return 0;
}
