#include <stdio.h>

int fat(int n) {
   int rs = 0;
   int isDefault = n == 0 || n == 1;
   
   rs = isDefault ? 1 : n * fat(n - 1);
   return rs;
}

float eulerNumber(int n) {
    float rs = 0.0;
    float recursiveEulerNumber = eulerNumber(n - 1) + 1.0 / fat(n);
    
    return (n == 0) ? 1.0 : recursiveEulerNumber;
}

int main() {
    int n;
    
    printf("Digite um número para calcular seu número de Euler: ");
    scanf("%d", &n);
    
    printf("Resultado: %.2f", eulerNumber(n));
    
    return 0;
}
