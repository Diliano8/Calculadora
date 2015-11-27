#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Autor: Diliano Ribeiro. 
//Data: 25/11/2015.
//Descrição: Calculadora com as quatro operações, e figuras geometricas.

 int main(){
  int opcao,fig; 
  float n1,n2,n3,n4,n5,n6,n7,n8;
  float soma,mult,div,sub;
   
  float a,vcubo,resfera, vesfera, vfesfera, altprisma,lbprisma, vprisma;
  float vcilindro, altcilindro, rcilindro, altpiramide, lbpiramide,vpiramide;
  float vcone, altcone,rcone; 
  int x,y,potencia,i;//variaveis para a potencia caso 6 
   while(opcao!=0){
     
     
     system("cls");
     printf("\n\n");
     printf("|-------MATEMATICA--------|\n");
     printf("|1 - para somar:          |\n");       
     printf("|2 - para multiplicar:    |\n");
     printf("|3 - para dividir:        |\n");
     printf("|4 - para subtracao:      |\n");
     printf("|5 - figuras geometricas  |\n");
     printf("|6 - cauculo de potencia  |\n");
     printf("|0 - para sair:           |\n");
     printf("|Escolha a opcao:         |\n");
     printf("|-------------------------|\n");
     scanf("%i",&opcao);
    
    switch(opcao){
      
      case 1:
           printf("Informe o primeiro valor a ser somado:\n");
           scanf("%f",&n1);
           
           printf("Informe o segundo valor a ser somado:\n");
           scanf("%f",&n2);
           
           soma=n1+n2;
           printf("}Resultado: %.2f\n",soma);
           getche();
           break;
           
           
      case 2:
           printf("Informe o primeiro valor a ser Multiplicado:\n");
           scanf("%f",&n3);
           
           printf("Informe o segundo valor:\n");
           scanf("%f",&n4);
           
           mult=n3*n4;
           printf("Resultado: %.2f\n",mult);
           getche();
           break;
           
           
      case 3:
           printf("Informe o primeiro valor a ser dividido:\n");
           scanf("%f",&n5);
           
           printf("Informe o segundo valor:\n");
           scanf("%f",&n6);
           
           div=n5/n6;
           printf("Resultado: %.2f\n",div);
           getche();
           break;
           
           
      case 4:
           printf("Informe o primeiro valor a ser subtraído:\n");
           scanf("%f",&n7);
           
           printf("Informe o segundo valor:\n");
           scanf("%f",&n8);
           
           sub=n7-n8;
           printf("Resultado: %.2f\n",sub);
           getche();
           break;
           
      case 5:
           
                
           //subconjunto de 5
       while(fig!=0){
       
       system("cls");
       printf("|-----------FIGURAS GEOMETRICAS------------|\n");
       printf("|7 - Para Cubo                             |\n");    
       printf("|8 - Para Esfera                           |\n");
       printf("|9 - Para Prisma de base quadrada          |\n");
       printf("|10 - Para Cilindro                        |\n");
       printf("|11 - Para Piramide de base quadrada       |\n");
       printf("|12 - Para Cone                            |\n");
       printf("|13 - Voltar par o menu principal          |\n");
       printf("|------------------------------------------|\n");
       printf("Opcao selecionada -> ");
       scanf("%d",&fig);
           
           
           switch(fig){
       
           case 7:
                 
                  printf("Infome o comprimento da aresta (lado) do cubo\n");
                  scanf("%f",&a);
                          
                  vcubo=(a*a*a);                          
                  printf("volume do Cubo %.2f cm3\n",vcubo);
                  getche();
                  break;             
                  
           case 8:
                  printf("Informe o comprimento do raio da esfera:\n");
                  scanf("%f",&resfera);
                  vesfera=4*3.14*(resfera*resfera*resfera);
                  vfesfera=vesfera/3;
                  printf("volume da Esfera %.2f cm3\n\n",vfesfera); 
                  getche();
                  break; 
         
           case 9:
                  
                   printf("Informe a altura do prisma:\n");
                   scanf("%f",&altprisma);
                         
                   printf("Informe o comprimento da aresta (lado) da base do prisma:\n");
                   scanf("%f",&lbprisma);
                          
                   vprisma=(lbprisma*lbprisma)*altprisma; //área da base x altura
                   printf("volume do Prisma %.2f cm3\n\n",vprisma);
                   getche();
                   break;
         
           case 10: 
                   
                   printf("Informe a altura do Cilindro:\n");
                   scanf("%f",&altcilindro);
                          
                   printf("Informe o raio da base do cilindro: \n");
                   scanf("%f",&rcilindro);
                          
                   vcilindro= (rcilindro*rcilindro)*3.14 * altcilindro; // área da base x altura
                   printf("volume do Cilindro %.2f cm3\n\n",vcilindro);
                   getche();
                   break;
           case 11:
                   
                   printf("Informe a altura da Piramide:\n");
                   scanf("%f",&altpiramide);
                          
                   printf("Informe o comprimento da aresta (lado) da base da piramide:\n");
                   scanf("%f",&lbpiramide);
                       
                   vpiramide=((lbpiramide*lbpiramide)*altpiramide)/3;
                   printf("volume da Piramide %.2f cm3\n\n",vpiramide);                                 
                   getche();
                   break;
           case 12:
                   printf("Informe a altura do cone:\n");
                   scanf("%f",&altcone);
                          
                   printf("Informe o raio da base do cone");
                   scanf("%f",&rcone);
                          
                   vcone= (3.14*(rcone*rcone)*altcone)/3;
                   printf("volume do cone %.2f cm3\n\n",vcone);
                   getche();
                   break;
                   }
                   
      case 6:
          printf("Informe o valor de x --> ");
          scanf("%d",&x);
          printf("Informe o valor de y --> ");
          scanf("%d",&y);
   
           if (y == 0)
            potencia = 1;
             else {
              potencia = x; // potencia ? igual a x elevado a 1   
              for(i=1;i<y;i++){
              potencia = potencia * x;  
              //printf("indice %d potencia %d \n\n",indice,potencia);
             getchar();    
            }     
            }    
   printf("Resultado = %d\n",potencia);
   
   system("pause");
}
}   
}
     
 
 }

