
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    #include<stdio.h>

    int main()
    {
    
        
    //Estou declarando as variáveis para as cartas 1 e 2.
    
    char estado [50], estado2 [50];
    char codigo1 [10],codigo2 [10]; //código da carta.
    char cidade [50], cidade2 [50];
    int populacao, populacao2;
    float area, area2; 
    float PIB,PIB2;
    int Ntp, Ntp2; //Npt = Número de pontos turísticos.
    
    /* Vale ressaltar que escolhi colocar as duas variáveis em 
    mesma linha, pois fica melhor a visualização das variáveis. Mas está escrito de forma simples
    para facilitar a identificação de suas denominações entre C1 e C2.
    */
    
    printf("Bem-Vindo ao Super Trunfo - Países \n");
    printf("Vamos Jogar!\n"); //Começando com uma mensagem de boas vindas.
    
    //Iniciando a capitação de dados com printf e scanf.
    //Carta 1
    
    /* Opitei por usar "fgets" nas variáveis de "estado" e "cidade". pois "scanf" impossibilita 
    a utilização de nomes composto, tirando as opções que o jogador poderá fazer e até o código ter algum bug. Mas fgets lê toda linha
    mesmo com espaços, tornando uma experiência segura.
    */
    
    printf("\nCarta 1: \n");
    printf("Digite o Estado: \n");
    fgets(estado, 50 , stdin);
    estado[strcspn(estado, "\n")] = 0;
    
    printf("Digite o código da carta: \n");
    fgets(codigo1, 10, stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;
    
    printf("Digite a cidade: \n");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0;
    
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    
    printf("Digite a área em km²: \n");
    scanf("%f", &area);
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    
    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &Ntp);
    
    //Capitação de dados para Carta 2
    
    printf("\n Carta 2: \n");
    printf("Digite o Estado: \n");
    getchar();
    fgets(estado2, 50 , stdin);
    estado2[strcspn(estado2, "\n")] = 0;
    
    printf("Digite o código da carta: \n");
    fgets(codigo2, 10, stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;
    
    printf("Digite a cidade: \n");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a área em km²: \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    
    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &Ntp2);
    
    //Expressando os dados com printf.
    
    /*Nas variáveis do tipo float (área e PIB) optei por delimitar com "%.2f" para a leitura ficar
    mais legível quando expressa por printf.
    */
    
    //Carta 01
    
    printf("\n Carta 1, \n");
    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codigo1);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f Bilhões de reais \n", PIB);
    printf("Número de pontos turísticos: %d \n", Ntp);
    
    //Carta 02
    
    printf("\n Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", PIB2);
    printf("Número de pontos turísticos: %d\n", Ntp2);
    
    
        return 0;
    }
 