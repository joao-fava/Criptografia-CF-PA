#  Criptografia em Duas Camadas: Cifra de César + Progressão Aritmética

Projeto em C que criptografa mensagens combinando duas técnicas clássicas.

##  Como funciona
1. **Camada 1 (Cifra de César):** cada letra é deslocada [N] posições no alfabeto.
2. **Camada 2 (Progressão Aritmética):** o deslocamento varia a cada caractere seguindo uma PA (primeiro termo `a1` e razão `r`).

> Exemplo: `"OLA"` → [resultado da camada 1] → [resultado final]

##  Funcionalidades
- [ ] Criptografar mensagem
- [ ] Descriptografar mensagem

##  Como executar
```bash
gcc "CF+PA.c" -o criptografia
./criptografia
```

##  O que aprendi
- Manipulação de strings e tabela ASCII em C
- Lógica de criptografia e modularização

##  Documentação
Veja a pasta [`doc`](./doc) para o relatório do trabalho.
