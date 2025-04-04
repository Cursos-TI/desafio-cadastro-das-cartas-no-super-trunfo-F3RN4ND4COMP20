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
   int Escolha1, Escolha2;
   int Primeiroatributo1,Primeiroatributo2,Segundoatributo1,Segundoatributo2;
   int Resultado1, Resultado2;
   float Somacarta1, Somacarta2;

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

   //Atributos disponíveis para comparacao

   printf("### Jogo Super Trunfo ###\n");
   printf("Escolha uma opcao para comparar:\n ");
   printf("1.Populacao\n");
   printf("2.Areacidade\n");
   printf("3.PIB\n");
   printf("4.Pontosturisticos\n");
   printf("5.Densidadepopulacional\n");
   printf("6.PIBpercapita\n");
   printf("7.Superpoder\n");
   printf("Escolha uma opcao: ");
   scanf("%d", &Escolha1);

   switch(Escolha1)
   {
   case 1:
   Primeiroatributo1=Populacao1;
   Primeiroatributo2=Populacao2;
   printf("Primeiro atributo escolhido: \n");
   printf("Carta 1-Cidade: %s-Populacao: %lu\n",Nomecidade1,Populacao1);
   printf("Carta 2-Cidade: %s-Populacao: %lu\n",Nomecidade2,Populacao2);
   Resultado1=Primeiroatributo1>Primeiroatributo2 ? 1:0;
   if(Resultado1==1)
   {
    printf("Carta 1 venceu!\n");
   }else if(Resultado1==0){
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 2:
   Primeiroatributo1=Areacidade1;
   Primeiroatributo2=Areacidade2;
   printf("Primeiro atributo escolhido: \n");
   printf("Carta 1-Cidade: %s-Area da cidade: %.1f\n",Nomecidade1,Areacidade1);
   printf("Carta 2-Cidade: %s-Area da cidade: %.3f\n",Nomecidade2,Areacidade2); 
   Resultado1=Primeiroatributo1>Primeiroatributo2 ? 1:0;
   if(Resultado1==1)
   {
    printf("Carta 1 venceu!\n");
   }else if(Resultado1==0){
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 3:
   Primeiroatributo1=PIB1;
   Primeiroatributo2=PIB2;
   printf("Primeiro atributo escolhido: \n");
   printf("Carta 1-Cidade: %s-PIB: %.1f\n",Nomecidade1,PIB1);
   printf("Carta 2-Cidade: %s-PIB: %.1f\n",Nomecidade2,PIB2); 
   Resultado1=Primeiroatributo1>Primeiroatributo2 ? 1:0;
   if(Resultado1==1)
   {
    printf("Carta 1 venceu!\n");
   }else if(Resultado1==0){
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 4:
   Primeiroatributo1=Pontosturisticos1;
   Primeiroatributo2=Pontosturisticos2;
   printf("Primeiro atributo escolhido: \n"); 
   printf("Carta 1-Cidade: %s-Pontos turisticos: %d\n",Nomecidade1,Pontosturisticos1);
   printf("Carta 2-Cidade: %s-Pontos turisticos: %d\n",Nomecidade2,Pontosturisticos2);
   Resultado1=Primeiroatributo1>Primeiroatributo2 ? 1:0;
   if(Resultado1==1)
   {
    printf("Carta 1 venceu!\n");
   }else if(Resultado1==0){
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 5:
   Primeiroatributo1=Densidadepopulacional1;
   Primeiroatributo2=Densidadepopulacional2;
   printf("Primeiro atributo escolhido: \n"); 
   printf("Carta 1-Cidade: %s-Densidade populacional: %.2f\n",Nomecidade1,Densidadepopulacional1);
   printf("Carta 2-Cidade: %s-Densidade populacional: %.1f\n",Nomecidade2,Densidadepopulacional2);
   Resultado1=Primeiroatributo1<Primeiroatributo2 ? 1:0;
   if(Resultado1==1)
   {
    printf("Carta 1 venceu!\n");
   }else if(Resultado1==0){
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 6:
   Primeiroatributo1=PIBpercapita1;
   Primeiroatributo2=PIBpercapita2;
   printf("Primeiro atributo escolhido: \n");
   printf("Carta 1-Cidade: %s-PIB per capita: %.2f\n",Nomecidade1,PIBpercapita1);
   printf("Carta 2-Cidade: %s-PIB per capita: %.2f\n",Nomecidade2,PIBpercapita2);
   Resultado1=Primeiroatributo1>Primeiroatributo2 ? 1:0;
   if(Resultado1==1)
   {
    printf("Carta 1 venceu!\n");
   }else if(Resultado1==0){
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 7:
   Primeiroatributo1=Superpoder1;
   Primeiroatributo2=Superpoder2;
   printf("Primeiro atributo escolhido: \n");  
   printf("Carta 1-Cidade: %s-Super poder: %f\n",Nomecidade1,Superpoder1);
   printf("Carta 2-Cidade: %s-Super poder: %f\n",Nomecidade2,Superpoder2);
   Resultado1=Primeiroatributo1>Primeiroatributo2 ? 1:0;
   if(Resultado1==1)
   {
    printf("Carta 1 venceu!\n");
   }else if(Resultado1==0){
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   default:
   printf("Opcao de jogo invalida!\n");
   break;
   }

   printf("Escolha uma opcao para comparar: \n");
   printf("1.Populacao\n");
   printf("2.Areacidade\n");
   printf("3.PIB\n");
   printf("4.Pontosturisticos\n");
   printf("5.Densidadepopulacional\n");
   printf("6.PIBpercapita\n");
   printf("7.Superpoder\n");
   printf("Escolha uma opcao: ");
   scanf("%d", &Escolha2);

   if(Escolha1==Escolha2){
      printf("Você escolheu o mesmo atributo!\n");
      printf("Escolha uma opcao para comparar: \n");
      printf("1.Populacao\n");
      printf("2.Areacidade\n");
      printf("3.PIB\n");
      printf("4.Pontosturisticos\n");
      printf("5.Densidadepopulacional\n");
      printf("6.PIBpercapita\n");
      printf("7.Superpoder\n");
      printf("Escolha uma opcao: ");
      scanf("%d", &Escolha2);
   
    switch(Escolha2)
   {
   case 1:
   Segundoatributo1=Populacao1;
   Segundoatributo2=Populacao2;
   printf("Segundo atributo escolhido: \n");
   printf("Carta 1-Cidade: %s-Populacao: %lu\n",Nomecidade1,Populacao1);
   printf("Carta 2-Cidade: %s-Populacao: %lu\n",Nomecidade2,Populacao2);
   Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
   if(Resultado2==1)
   {
    printf("carta 1 venceu!\n");
   }else if(Resultado2==0)
   {
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 2:
   Segundoatributo1=Areacidade1;
   Segundoatributo2=Areacidade2;
   printf("Segundo atributo escolhido: \n");
   printf("Carta 1-Cidade: %s-Area da cidade: %.1f\n",Nomecidade1,Areacidade1);
   printf("Carta 2-Cidade: %s-Area da cidade: %.3f\n",Nomecidade2,Areacidade2); 
   Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
   if(Resultado2==1)
   {
    printf("carta 1 venceu!\n");
   }else if(Resultado2==0)
   {
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 3:
   Segundoatributo1=PIB1;
   Segundoatributo2=PIB2;
   printf("Segundo atributo escolhido: \n");
   printf("Carta 1-Cidade: %s-PIB: %.1f\n",Nomecidade1,PIB1);
   printf("Carta 2-Cidade: %s-PIB: %.1f\n",Nomecidade2,PIB2); 
   Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
   if(Resultado2==1)
   {
    printf("carta 1 venceu!\n");
   }else if(Resultado2==0)
   {
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 4:
   Segundoatributo1=Pontosturisticos1;
   Segundoatributo2=Pontosturisticos2;
   printf("Segundo atributo escolhido: \n"); 
   printf("Carta 1-Cidade: %s-Pontos turisticos: %d\n",Nomecidade1,Pontosturisticos1);
   printf("Carta 2-Cidade: %s-Pontos turisticos: %d\n",Nomecidade2,Pontosturisticos2);
   Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
   if(Resultado2==1)
   {
    printf("carta 1 venceu!\n");
   }else if(Resultado2==0)
   {
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 5:
   Segundoatributo1=Densidadepopulacional1;
   Segundoatributo2=Densidadepopulacional2;
   printf("Segundo atributo escolhido: \n"); 
   printf("Carta 1-Cidade: %s-Densidade populacional: %.2f\n",Nomecidade1,Densidadepopulacional1);
   printf("Carta 2-Cidade: %s-Densidade populacional: %.1f\n",Nomecidade2,Densidadepopulacional2);
   Resultado2=Segundoatributo1<Segundoatributo2 ? 1:0;
   if(Resultado2==1)
   {
    printf("carta 1 venceu!\n");
   }else if(Resultado2==0)
   {
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 6:
   Segundoatributo1=PIBpercapita1;
   Segundoatributo2=PIBpercapita2;
   printf("Segundo atributo escolhido: \n");
   printf("Carta 1-Cidade: %s-PIB per capita: %.2f\n",Nomecidade1,PIBpercapita1);
   printf("Carta 2-Cidade: %s-PIB per capita: %.2f\n",Nomecidade2,PIBpercapita2);
   Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
   if(Resultado2==1)
   {
    printf("carta 1 venceu!\n");
   }else if(Resultado2==0)
   {
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 7:
   Segundoatributo1=Superpoder1;
   Segundoatributo2=Superpoder2;
   printf("Segundo atributo escolhido: \n");  
   printf("Carta 1-Cidade: %s-Super poder: %f\n",Nomecidade1,Superpoder1);
   printf("Carta 2-Cidade: %s-Super poder: %f\n",Nomecidade2,Superpoder2);
   Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
   if(Resultado2==1)
   {
    printf("carta 1 venceu!\n");
   }else if(Resultado2==0)
   {
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;}
   
}else{
   
    switch(Escolha2)
   {
   case 1:
   Segundoatributo1=Populacao1;
   Segundoatributo2=Populacao2;
   printf("Segundo atributo escolhido: \n");
   printf("Carta 1-Cidade: %s-Populacao: %lu\n",Nomecidade1,Populacao1);
   printf("Carta 2-Cidade: %s-Populacao: %lu\n",Nomecidade2,Populacao2);
   Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
   if(Resultado2==1)
   {
    printf("carta 1 venceu!\n");
   }else if(Resultado2==0)
   {
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   case 2:
   Segundoatributo1=Areacidade1;
   Segundoatributo2=Areacidade2;
   printf("Segundo atributo escolhido: \n");
   printf("Carta 1-Cidade: %s-Area da cidade: %.1f\n",Nomecidade1,Areacidade1);
   printf("Carta 2-Cidade: %s-Area da cidade: %.3f\n",Nomecidade2,Areacidade2); 
   Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
   if(Resultado2==1)
   {
      printf("carta 1 venceu!\n");
     }else if(Resultado2==0)
     {
      printf("Carta 2 venceu!\n");
     }else{
      printf("Empate!\n");
     }
     break;
     case 3:
     Segundoatributo1=PIB1;
     Segundoatributo2=PIB2;
     printf("Segundo atributo escolhido: \n");
     printf("Carta 1-Cidade: %s-PIB: %.1f\n",Nomecidade1,PIB1);
     printf("Carta 2-Cidade: %s-PIB: %.1f\n",Nomecidade2,PIB2); 
     Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
     if(Resultado2==1)
     {
      printf("carta 1 venceu!\n");
     }else if(Resultado2==0)
     {
      printf("Carta 2 venceu!\n");
     }else{
      printf("Empate!\n");
     }
     break;
     case 4:
     Segundoatributo1=Pontosturisticos1;
     Segundoatributo2=Pontosturisticos2;
     printf("Segundo atributo escolhido: \n"); 
     printf("Carta 1-Cidade: %s-Pontos turisticos: %d\n",Nomecidade1,Pontosturisticos1);
     printf("Carta 2-Cidade: %s-Pontos turisticos: %d\n",Nomecidade2,Pontosturisticos2);
     Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
     if(Resultado2==1)
     {
      printf("carta 1 venceu!\n");
     }else if(Resultado2==0)
     {
      printf("Carta 2 venceu!\n");
     }else{
      printf("Empate!\n");
     }
     break;
     case 5:
     Segundoatributo1=Densidadepopulacional1;
     Segundoatributo2=Densidadepopulacional2;
     printf("Segundo atributo escolhido: \n"); 
     printf("Carta 1-Cidade: %s-Densidade populacional: %.2f\n",Nomecidade1,Densidadepopulacional1);
     printf("Carta 2-Cidade: %s-Densidade populacional: %.1f\n",Nomecidade2,Densidadepopulacional2);
     Resultado2=Segundoatributo1<Segundoatributo2 ? 1:0;
     if(Resultado2==1)
     {
      printf("carta 1 venceu!\n");
     }else if(Resultado2==0)
     {
      printf("Carta 2 venceu!\n");
   }else{
      printf("Empate!\n");
     }
     break;
     case 6:
     Segundoatributo1=PIBpercapita1;
     Segundoatributo2=PIBpercapita2;
     printf("Segundo atributo escolhido: \n");
     printf("Carta 1-Cidade: %s-PIB per capita: %.2f\n",Nomecidade1,PIBpercapita1);
     printf("Carta 2-Cidade: %s-PIB per capita: %.2f\n",Nomecidade2,PIBpercapita2);
     Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
     if(Resultado2==1)
     {
      printf("carta 1 venceu!\n");
     }else if(Resultado2==0)
     {
      printf("Carta 2 venceu!\n");
     }else{
      printf("Empate!\n");
     }
     break;
     case 7:
     Segundoatributo1=Superpoder1;
     Segundoatributo2=Superpoder2;
     printf("Segundo atributo escolhido: \n");  
     printf("Carta 1-Cidade: %s-Super poder: %f\n",Nomecidade1,Superpoder1);
     printf("Carta 2-Cidade: %s-Super poder: %f\n",Nomecidade2,Superpoder2);
     Resultado2=Segundoatributo1>Segundoatributo2 ? 1:0;
     if(Resultado2==1)
     {
      printf("carta 1 venceu!\n");
   }else if(Resultado2==0)
   {
    printf("Carta 2 venceu!\n");
   }else{
    printf("Empate!\n");
   }
   break;
   default:
   printf("Opcao de jogo invalida!\n");
   break;}

}
   
   //Comparacao para caso de vitoria nos 2 atributos
   if((Resultado1==1)&&(Resultado2==1))
   {
    printf("Carta 1 venceu nos 2 atributos!\n");
   }else if((Resultado1==0)&&(Resultado2==0))
   {
    printf("Carta 2 venceu nos 2 atributos!\n");
   }else{
    printf("Empate!\n");

   }

   //Soma dos pontos dos atributos
   Somacarta1=Primeiroatributo1 + Segundoatributo1;
   Somacarta2=Primeiroatributo2 + Segundoatributo2;
   printf("### Rodada Bonus ###\n");
   //Comparacao das somas de atributos
   printf("O valor da soma de atributos da Carta 1 é: %.2f\n",Somacarta1);
   printf("O valor da soma de atributos da Carta 2 é: %.2f\n",Somacarta2);

   if(Somacarta1==Somacarta2)
   {
    printf("Empate,tente novamente!\n");
   }else if(Somacarta1>Somacarta2)
   {
    printf("Pontos: %.2f-Carta 1 venceu!\n",Somacarta1);
   }else{
    printf("Pontos: %.2f-Carta 2 venceu!\n",Somacarta2);

   }
   
    return 0;

   }
    
   


    
