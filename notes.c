#include <stdio.h>
#include <stdlib.h>


/* printf("%d", &var);
%f, %c, %s*/

/*scanf("%d", &var);*/

/*
#include <time.h>// random
    srand(time(0));
    int random = rand() % 10;
    printf("%d", random);   
*/

/*switch(nun)
    {
        case 1:
            printf("%d", nun);
            break;
        case 2:
            printf("%d", nun);
            break;
        case 3:
            printf("%d", nun);
            break;
        default:
            printf("default");
            break;
    }   */
    /*int i = 0;
    while(i < 10){    
        i++;
        printf("Loop %d \n", i);
        
    }*/
// system("pause");
// # define NUMERO_CONSTANTE 3
int main()
{
  int nun;
  int acerto = 0;
  printf("digite um numero");
  scanf("%d", nun);
  while (!acerto)
  {
      if(nun<0){
          printf("Numero invalido");
          continue;

      }
  }
  
}