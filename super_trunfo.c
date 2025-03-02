#include <stdio.h>

int main(){
    char Estado1, Estado2[10];
    char Codigocarta1[10], Codigocarta2[10];
    char Nomecidade1[20], Nomecidade2[20];
    int Populacao1, Populacao2;
    float Areacidade1, Areacidade2;
    float PIB1, PIB2;
    int Pontosturisticos1, Pontosturisticos2;
    float Densidadepopulacional1, Densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;

    printf("Carta 1\n");
    printf("Digite o Estado: ");
    scanf("%c", &Estado1);

    printf("Digite o Codigo da carta: ");
    scanf("%s", Codigocarta1);

    printf("Digite o Nome da cidade: ");
    scanf("%s", Nomecidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &Populacao1);

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

    Densidadepopulacional1=(float)(Populacao1/Areacidade1);
    PIBpercapita1=(float)(PIB1/Populacao1);

    printf("Carta 1\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo da carta: %s\n", Codigocarta1);
    printf("Nome da cidade: %s\n", Nomecidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area da cidade: %f\n", Areacidade1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turisticos: %d\n", Pontosturisticos1);
    printf("Densidade populacional: %.2f\n", Densidadepopulacional1);
    printf("PIB per capita: %.2f\n", PIBpercapita1);

    printf("Carta 2\n");
    printf("Digite o Estado: ");
    scanf("%s", Estado2);

    printf("Digite o Codigo da carta: ");
    scanf("%s", Codigocarta2);

    printf("Digite o Nome da cidade: ");
    scanf("%s", Nomecidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &Populacao2);

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

    Densidadepopulacional2=(float)(Populacao2/Areacidade2);
    PIBpercapita2=(float)(PIB2/Populacao2);

    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta: %s\n", Codigocarta2);
    printf("Nome da cidade: %s\n", Nomecidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area da cidade: %f\n", Areacidade2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos turisticos: %d\n", Pontosturisticos2);
    printf("Densidade populacional: %.2f\n", Densidadepopulacional2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);

    return 0;

}
    

    






