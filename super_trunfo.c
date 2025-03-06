#include <stdio.h>

int main(){
    char Estado1, Estado2[10];
    char Codigocarta1[10], Codigocarta2[10];
    char Nomecidade1[20], Nomecidade2[20];
    unsigned long int Populacao1, Populacao2;
    float Areacidade1, Areacidade2;
    float PIB1, PIB2;
    int Pontosturisticos1, Pontosturisticos2;
    float Densidadepopulacional1, Densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;
    float Superpoder1, Superpoder2;
    int Resultado1;
    int Resultado2;
    int Resultado3;
    int Resultado4;
    int Resultado5;
    int Resultado6;
    int Resultado7;

    printf("Carta 1\n");
    printf("Digite o Estado: ");
    scanf("%c", &Estado1);

    printf("Digite o Codigo da carta: ");
    scanf("%s", Codigocarta1);

    printf("Digite o Nome da cidade: ");
    scanf("%s", Nomecidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &Populacao1);

    printf("Digite a Area da cidade: ");
    scanf("%f", &Areacidade1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite os Pontos turisticos: ");
    scanf("%d", &Pontosturisticos1);

    printf("Digite a Densidade populacional: ");
    scanf("%f", &Densidadepopulacional1);

    printf("Digite o PIB per capita: ");
    scanf("%f", &PIBpercapita1);

    printf("Digite o Super poder: ");
    scanf("%f", &Superpoder1);

    Densidadepopulacional1=(float)(Populacao1/Areacidade1);
    PIBpercapita1=(float)(PIB1 * 1000000000)/Populacao1;
    Superpoder1=(float)(Populacao1+Areacidade1+(PIB1 * 1000000000)+Pontosturisticos1+PIBpercapita1+1/Densidadepopulacional1);

    printf("Carta 1\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo da carta: %s\n", Codigocarta1);
    printf("Nome da cidade: %s\n", Nomecidade1);
    printf("Populacao: %lu\n", Populacao1);
    printf("Area da cidade: %.3f\n", Areacidade1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turisticos: %d\n", Pontosturisticos1);
    printf("Densidade populacional: %.2f\n", Densidadepopulacional1);
    printf("PIB per capita: %.3f\n", PIBpercapita1);
    printf("Super poder: %.3f\n", Superpoder1);

    printf("Carta 2\n");
    printf("Digite o Estado: ");
    scanf("%s", Estado2);

    printf("Digite o Codigo da carta: ");
    scanf("%s", Codigocarta2);

    printf("Digite o Nome da cidade: ");
    scanf("%s", Nomecidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &Populacao2);

    printf("Digite a Area da cidade: ");
    scanf("%f", &Areacidade2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite os Pontos turisticos: ");
    scanf("%d", &Pontosturisticos2);

    printf("Digite a Densidade populacional: ");
    scanf("%f", &Densidadepopulacional2);

    printf("Digite o PIB per capita: ");
    scanf("%f", &PIBpercapita2);

    printf("Digite o Super poder: ");
    scanf("%f", &Superpoder2);

    Densidadepopulacional2=(float)(Populacao2/Areacidade2);
    PIBpercapita2=(float)(PIB2 * 1000000000)/Populacao2;
    Superpoder2=(float)(Populacao2+Areacidade2+(PIB2 * 1000000000)+Pontosturisticos2+PIBpercapita2+1/Densidadepopulacional2);

    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta: %s\n", Codigocarta2);
    printf("Nome da cidade: %s\n", Nomecidade2);
    printf("Populacao: %lu\n", Populacao2);
    printf("Area da cidade: %.3f\n", Areacidade2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos turisticos: %d\n", Pontosturisticos2);
    printf("Densidade populacional: %.2f\n", Densidadepopulacional2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);
    printf("Super poder: %.2f\n", Superpoder2);

    // Comparacao das cartas

    Resultado1=Populacao1>Populacao2;
    Resultado2=Areacidade1>Areacidade2;
    Resultado3=PIB1>PIB2;
    Resultado4=Pontosturisticos1>Pontosturisticos2;
    Resultado5=PIBpercapita1>PIBpercapita2;
    Resultado6=Densidadepopulacional1<Densidadepopulacional2;
    Resultado7=Superpoder1>Superpoder2;

    printf("Carta 1: %lu vs. Carta 2: %lu -> Carta %d venceu!\n\n", Populacao1, Populacao2, (Populacao1>Populacao2)? 1:2);
    printf("Carta 1: %f vs. Carta 2: %f -> Carta %d venceu!\n\n", Areacidade1, Areacidade2, (Areacidade1>Areacidade2)? 1:2);
    printf("Carta 1: %f vs. Carta 2: %f -> Carta %d venceu!\n\n", PIB1, PIB2, (PIB1>PIB2)? 1:2);
    printf("Carta 1: %d vs. Carta 2: %d -> Carta %d venceu!\n\n", Pontosturisticos1, Pontosturisticos2, (Pontosturisticos1>
                                                                                                         Pontosturisticos2)? 1:2);
    printf("Carta 1: %f vs. Carta 2: %f -> Carta %d venceu!\n\n", PIBpercapita1, PIBpercapita2, (PIBpercapita1>PIBpercapita2)? 1:2);
    printf("Carta 1: %f vs. Carta 2: %f -> Carta %d venceu!\n\n",Densidadepopulacional1,Densidadepopulacional2, (Densidadepopulacional1<
                                                                                                        Densidadepopulacional2)? 1:2);
    printf("Carta 1: %f vs. Carta 2: %f -> Carta %d venceu!\n\n", Superpoder1, Superpoder2, (Superpoder1>Superpoder2)? 1:2);

    return 0;

}
    

    

    






