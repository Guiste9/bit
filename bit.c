#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
 unsigned char x = 0b00000000;
int desloc;
int y;
  int t;
  int armarios_ocupados = 0;
  srand(time(NULL));
while(y != 3){
printf("digite 1 para ocupar o armario\n");
printf("digite 2 para liberar um armario\n");
printf("digite 3 para sair do programa\n");
scanf("%d",&y);

  
if(y == 1){
  if(armarios_ocupados < 8) {

  do{
   desloc = rand() % 8;
  } while (x & (1 << desloc));

    x |= (1 << desloc);
    armarios_ocupados ++;
  printf("%d\n",desloc); 
   printf("estado atual dos armarios :%hhu\n",x);
  } else {
    printf("nao ha armarios disponiveis\n");
  }
}
  
if( y == 2){
  printf("insira o numero do armario que deseja liberar\n");
  scanf("%d",&t);
  
x &= ~(1 << t);
    printf("estado atual dos armarios :%hhu\n",x);
  
           } 

             }
  return 0;
                  }