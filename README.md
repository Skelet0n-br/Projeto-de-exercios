# Jogo de Adivinhação em C

Este é um projeto simples desenvolvido para praticar conceitos de lógica de programação, estruturas de repetição e condicionais em C. O objetivo do jogo é encontrar o número secreto definido no código.

## 🚀 Como funciona

1. O programa inicia e solicita um número entre 1 e 100.
2. O usuário insere um palpite.
3. O sistema compara o palpite com o número secreto:
   - **Foi muito alto**: O palpite é maior que o segredo.
   - **Foi muito baixo**: O palpite é menor que o segredo.
   - **Parabéns acertou**: O usuário encontrou o número.
4. O loop continua até que o acerto aconteça.

## 🛠️ Tecnologias Utilizadas

* **Linguagem C**
* **Bibliotecas Padrão**: `stdio.h` e `stdlib.h`

## 📋 Como Executar

Para rodar este código, você precisará de um compilador C (como o GCC).

1. Salve o código em um arquivo chamado `main.c`.
2. Execute o programa: ./jogo
    📝 Observações de Código
O código utiliza uma variável de controle z para armazenar o número premiado (neste caso, o 58). Ele faz o uso de um laço while para manter o jogo ativo enquanto o usuário não acerta o valor.

Desenvolvido como parte de estudos em Ciência da Computação.


### 💡 Uma dica rápida sobre o código:
No seu código original, a variável `x` começa sem um valor definido (lixo de memória). Para evitar que o programa se comporte de um jeito estranho logo de cara, é uma boa prática inicializá-la, por exemplo: `int x = 0;`. 

Isso garante que o `while(x != z)` funcione perfeitamente desde a primeira verificação!
  
4. Abra o terminal e compile o arquivo:
   ```bash
   gcc main.c -o jogo
