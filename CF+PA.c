#include <stdio.h>
#include <string.h>
 
int main() {
    char palavra[16], cod[16];
    int shift, n, i;
    FILE *arq;
 
    printf("Palavra (ate 15 letras minusculas, sem acento): ");
    scanf("%15s", palavra);
    printf("SHIFT: ");
    scanf("%d", &shift);
 
    n = strlen(palavra);
 
    /* PA: 1, 3, 5, 7... (a1 = 1, r = 2) */
    for (i = 0; i < n; i++) {
        cod[i] = 'a' + (palavra[i] - 'a' + shift + 1 + i * 2) % 26;
    }
    cod[n] = '\0';
 
    printf("Palavra criptografada: %s\n", cod);
 
    arq = fopen("resultado_criptografia.txt", "w");
    fprintf(arq, "Palavra codificada: %s | SHIFT: %d | Tipo: PA | Letras: %d\n", cod, shift, n);
    fclose(arq);
 
    arq = fopen("log_execucao.txt", "a");
    fprintf(arq, "Criptografou '%s' com SHIFT %d -> '%s'\n", palavra, shift, cod);
    fclose(arq);
 
    return 0;
}