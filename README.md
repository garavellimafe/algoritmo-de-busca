Algoritmos de Busca: Linear e Binária

Busca Linear
Descrição: A busca linear percorre o vetor de elementos de forma sequencial, verificando um por um até encontrar o valor desejado. É útil para vetores desordenados.
Busca Binária
Descrição: A busca binária é realizada em vetores ordenados, dividindo o espaço de busca ao meio a cada iteração. Essa técnica reduz drasticamente o número de comparações necessárias em vetores grandes.

Arquivos do Repositório
1. busca_linear.c
Implementação da busca linear para inteiros. Funciona com vetores desordenados e realiza a busca por um valor específico.

Compilar e executar:

gcc busca_linear.c -o busca_linear.exe
./busca_linear.exe
2. busca_binaria.c
Implementação da busca binária para inteiros, que exige um vetor ordenado. A função também pode ser adaptada para encontrar a primeira ocorrência de um valor (em caso de duplicatas).

Compilar e executar:

gcc busca_binaria.c -o busca_binaria.exe
./busca_binaria.exe
3. cpf_busca.c
Implementação de busca linear e binária para CPFs, com o uso de strings. O vetor de CPFs pode estar desordenado ou ordenado lexicograficamente, dependendo da técnica de busca utilizada.

Compilar e executar:

gcc cpf_busca.c -o cpf_busca.exe
./cpf_busca.exe
Como Executar
Para executar os exemplos de busca, siga os passos abaixo:

Compile o código: Use o comando gcc para compilar os arquivos .c de sua escolha.
Execute o programa: Após compilar, execute o arquivo gerado com o comando ./nome_do_arquivo.exe.
Forneça os dados: Durante a execução, o programa solicitará os valores a serem buscados. Insira os valores conforme as instruções.
Exercícios Práticos
1. Catálogo de Produtos (Linear vs. Binária)
Monte um vetor de códigos de produto com ao menos 30 itens. Compare a quantidade de iterações realizadas para uma busca linear em vetor desordenado e uma busca binária em vetor ordenado.

2. Agenda de Nomes (Strings)
Implemente uma busca linear e uma busca binária por nome em uma lista de ao menos 20 nomes. A busca linear deve ser case-insensitive (não considerando maiúsculas e minúsculas).

3. Limiares de Sensores (Lower Bound)
Implemente uma variação da busca binária que retorna o índice do primeiro valor maior ou igual ao alvo (lower bound). Teste diferentes valores-alvo e discuta os casos em que o alvo é menor, maior ou igual a múltiplos valores.

Observações sobre os Algoritmos
Busca Linear: Ideal para vetores pequenos ou quando a ordem dos dados não pode ser garantida.
Busca Binária: Muito mais eficiente para vetores grandes, mas requer que os dados estejam ordenados ou sejam ordenados previamente.
Notas sobre Implementação:
Busca Binária: A implementação usa a fórmula meio = ini + (fim - ini) / 2 para evitar overflow ao calcular o índice do meio.
Busca Linear: Comparando cada elemento até encontrar o valor desejado.
Busca de CPF: As strings são comparadas usando strcmp para garantir que os CPFs sejam tratados corretamente, incluindo zeros à esquerda.
