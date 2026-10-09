#include <stdio.h>
#include <string.h>
 
int main() {
    char palavra[16], cod[16];
    int shift, a1, r, n, i, termo;
    FILE *arq;
 
    printf("Palavra (ate 15 letras minusculas, sem acento): ");
    scanf("%15s", palavra);
    printf("SHIFT: ");
    scanf("%d", &shift);
    printf("Primeiro termo da PA (a1): ");
    scanf("%d", &a1);
    printf("Razao da PA (r): ");
    scanf("%d", &r);
 
    n = strlen(palavra);
 
    
    for (i = 0; i < n; i++) {
        termo = a1 + i * r;
        cod[i] = 'a' + (palavra[i] - 'a' + shift + termo) % 26;
    }
    cod[n] = '\0';
 
    printf("Palavra criptografada: %s\n", cod);
 
    
    arq = fopen("resultado_criptografia.txt", "w");
    fprintf(arq, "Palavra codificada: %s | SHIFT: %d | Tipo: PA | Letras: %d\n", cod, shift, n);
    fclose(arq);
 
    
    arq = fopen("log_execucao.txt", "a");
    fprintf(arq, "Criptografou '%s' com SHIFT %d e PA (a1=%d, r=%d) -> '%s'\n", palavra, shift, a1, r, cod);
    fclose(arq);
 
    return 0;
}