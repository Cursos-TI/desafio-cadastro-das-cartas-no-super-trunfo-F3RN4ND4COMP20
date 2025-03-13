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
    printf("Area da cidade: %.1f\n", Areacidade1);
    printf("PIB: %.1f\n", PIB1);
    printf("Pontos turisticos: %d\n", Pontosturisticos1);
    printf("Densidade populacional: %.2f\n", Densidadepopulacional1);
    printf("PIB per capita: %.2f\n", PIBpercapita1);
    printf("Super poder: %f\n", Superpoder1);

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
    printf("PIB: %.1f\n", PIB2);
    printf("Pontos turisticos: %d\n", Pontosturisticos2);
    printf("Densidade populacional: %.1f\n", Densidadepopulacional2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);
    printf("Super poder: %f\n", Superpoder2);

    // Comparacao das cartas

    if(Populacao1>Populacao2){printf("Carta 1-fortaleza:2574412,Carta 2-belém:1398531,resultado:Carta 1 venceu\n");}
    else {printf("Carta 1-fortaleza:2574412,Carta 2-belém:1398531,resultado:Carta 2 venceu\n");}

    if(Areacidade1>Areacidade2){printf("Carta 1-fortaleza:313.8,Carta 2-belém:1059,resultado:Carta 1 venceu\n");}
    else {printf("Carta 1-fortaleza:313.8,Carta 2-belém:1059,resultado:Carta 2 venceu\n");}

    if(PIB1>PIB2){printf("Carta 1-fortaleza:73.4,Carta 2-belém:33.4,resultado:Carta 1 venceu\n");} 
    else {printf("Carta 1-fortaleza:73.4,Carta 2-belém:33.4,resultado:Carta 2 venceu\n");}

    if(Pontosturisticos1>Pontosturisticos2){printf("Carta 1-fortaleza:16,Carta 2-belém:15,resultado:Carta 1 venceu\n");} 
    else {printf("Carta 1-fortaleza:16,Carta 2-belém:15,resultado:Carta 2 venceu\n");}

    if(PIBpercapita1>PIBpercapita2){printf("Carta 1-fortaleza:27164.45,Carta 2-belém:22216.33,resultado:Carta 1 venceu\n");} 
    else {printf("carta 1-fortaleza:27164.45,Carta 2-belém:22216.33,resultado:Carta 2 venceu\n");}

    if(Densidadepopulacional1<Densidadepopulacional2){
       printf("Carta 1-fortaleza:7775.52,Carta 2-belém:1320,resultado:Carta 1 venceu\n");} 
    else {printf("Carta 1-fortaleza:7775.52,Carta 2-belém:1320,resultado:Carta 2 venceu\n");}

    if(Superpoder1>Superpoder2){printf("Carta 1-fortaleza:734026001906.25,Carta 2-belém:33401421821.331,resultado:Carta 1 venceu\n");}
    else {printf("Carta 1-fortaleza:734026001906.25,Carta 2-belém:33401421821.331,resultado:Carta 2 venceu\n");}

    return 0;

}
    

    

    






