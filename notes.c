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

/*O C automaticamente imprime várias casas decimais quando usamos
a máscara %f no printf(). %.2f, 2 casas decimais:
printf("Você fez %.2f pontos\n", pontos);*/
int main()
{
  int a = 10;
  int b = 3;
  float div = ((float)a /(float)b);
    printf("%.4f", div);
    
  return 0;
  
}