Jogo de Adivinhação em C
Este é um projeto simples desenvolvido em linguagem C para praticar conceitos de lógica de programação, estruturas de repetição e condicionais. O objetivo do jogo é adivinhar um número secreto definido no código.

🚀 Como funciona
O programa define um número inteiro fixo e solicita que o usuário tente adivinhá-lo fornecendo palpites entre 1 e 100.

Se o palpite for maior que o número secreto, o programa avisa: "Foi muito alto".

Se o palpite for menor que o número secreto, o programa avisa: "Foi muito baixo".

O jogo continua até que o usuário acerte o número exato.

🛠️ Tecnologias Utilizadas
Linguagem C: Linguagem de programação de baixo nível.

GCC: Compilador utilizado para transformar o código-fonte em executável.

📋 Pré-requisitos
Para rodar este projeto, você precisará de um compilador C instalado em sua máquina (como o GCC no Linux/MinGW no Windows).

🔧 Execução
Clone o repositório:

Bash
git clone https://github.com/seu-usuario/nome-do-repositorio.git
Navegue até a pasta do projeto:

Bash
cd nome-do-repositorio
Compile o código:

Bash
gcc main.c -o jogo_adivinhacao
Execute o programa:

Bash
./jogo_adivinhacao
📝 Observações Técnicas
Atualmente, o código utiliza uma variável fixa para o número secreto:

C
int z = 58;
Nota: No loop while, o programa verifica a condição x != z para manter o jogo rodando até o acerto.
