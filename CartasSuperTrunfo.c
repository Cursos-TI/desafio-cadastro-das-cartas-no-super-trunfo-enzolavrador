#include <stdio.h>
//TRABALHO DO NIVEL NOVATO!!!!!!!!!!
int main() {
    char nome[15];
//Algumas informacoes aparecem instantaneamente apos usar a funcao 'printf'.
//As regras do jogo sao informadas apos o jogador inserir seu nome atraves do comando 'scanf'.
    char regras[500]="Regras basicas do Super Trunfo:\n 1. Cada jogador tem uma carta com: Codigo, estado, nome da cidade, populacao, area, PIB e numero de pontos turisticos.\n 2. O jogo comeca com um jogador escolhendo uma categoria.\n 3. O outro jogador deve escolher a mesma categoria.\n 4. O jogador com o maior valor na categoria ganha a rodada.\n 5. O jogo continua ate que um jogador fique sem cartas.\n 6. O jogador que ficar com todas as cartas vence o jogo.";
    printf("==Bem-vindo ao Super Trunfo==\n""\n");
 //Utilizo '"\n""\n"'(duas vezes consecutivas) para dar um espacamento de linhas melhor, evitando que fique confuso algumas informacoes.  
    printf("Para comecar, digite seu nome: ");

    scanf("%s",nome);

    printf("Vamos nessa, %s!\n""\n",nome);

    printf("%s\n""\n", regras);
//As cartas sao apresentadas aos jogadores usando variaveis que guardam informacoes, sendo elas caracteres, numeros inteiros e numeros nao inteiros.
printf("CARTA 1 \n Codigo: A1 \n Estado: SP \n Nome da Cidade: Sao Paulo \n Populacao: 12.252.023 \n Area: 1.521 km2 \n PIB: R$ 699.33 bilhoes \n Numero de Pontos Turisticos: 29\n""\n");
    char codigo1[4]="A1";
    char estado1[4]="SP";
    char cidade1[10]="Sao Paulo";
    int populacao1= 12252023;
    float area1= 1521.0;
    float pib1= 699.33;
    int pontos1= 29;

printf("CARTA 2 \n Codigo: B1 \n Estado: RJ \n Nome da Cidade: Rio de Janeiro \n Populacao: 6.718.903 \n Area: 1.255 km2 \n PIB: R$ 365.32 bilhoes \n Numero de Pontos Turisticos: 60\n""\n");

    char codigo2[4]="B1";
    char estado2[4]="RJ";
    char cidade2[15]="Rio de Janeiro";
    int populacao2= 6718903;
    float area2= 1255.0;
    float pib2= 365.32;
    int pontos2= 60;

printf("Essas sao as cartas, vamos jogar!!!\n""\n");
printf("===RODADA 1===\n""\n");
//Entao comeca a primeira rodada, cada jogador escolheu uma carta.
printf("Jogador 1, escolheu a carta 1:\n");
printf("Codigo: %s\n", codigo1);
printf("Estado: %s\n", estado1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.1f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Numero de Pontos Turisticos: %d\n""\n", pontos1);

printf("Jogador 2, escolheu a carta 2:\n");
printf("Codigo: %s\n", codigo2);
printf("Estado: %s\n", estado2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.1f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Numero de Pontos Turisticos: %d\n""\n", pontos2);

printf("Digite sua populacao jogador 1: \n");
scanf("%d", &populacao1);
printf("Digite sua populacao jogador 2: \n");
scanf("%d", &populacao2);

printf("Jogador 1, sua populacao e maior que a do jogador 2: %d, voce ganhou!\n""\n", populacao1);
printf("=== RODADA 2 ===\n""\n");
printf("Digite sua area jogador 1: \n");
scanf("%f", &area1);
printf("Digite sua area jogador 2: \n");
scanf("%f", &area2);
printf("Jogador 1, sua area e maior que a do jogador 2: %.1f, voce ganhou!\n""\n", area1);
printf("=== RODADA 3 ===\n""\n");
printf("Digite seu PIB jogador 1: \n");
scanf("%f", &pib1);
printf("Digite seu PIB jogador 2: \n");
scanf("%f", &pib2);
printf("Jogador 1, seu PIB e maior que o do jogador 2: %.2f, voce ganhou!\n""\n", pib1);
printf("=== RODADA 4 ===\n""\n");
printf("Digite seu numero de pontos turisticos jogador 1: \n");
scanf("%d", &pontos1);
printf("Digite seu numero de pontos turisticos jogador 2: \n");
scanf("%d", &pontos2);
printf("Jogador 2, seu numero de pontos turisticos e maior que o do jogador 1: %d, voce ganhou!\n""\n", pontos2);
printf("=== FIM DO JOGO ===\n""\n");
printf("Jogador 1 venceu com 3 pontos a 1! PARABENS!!!\n");

return 0;

    
}
