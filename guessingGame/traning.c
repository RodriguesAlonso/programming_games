#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Rules
The computer will think a number, and you, will need guess it.
Wjich each error, the machine wil tell you whether the number kicked was greater or lower than thought.
*/

int main(){
    int secretNumber, guess, try, dificulty, guessLimit;
    //presentation
    printf("\n-=-=-Wellcome to the guessing game-=-=-\n");
    printf("\n-=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=-\n");
    //chose dificulty    
    printf("\n-=-=-choise the difficulty-=-=-\n1 - Easy\n2 - Normal\n3 - Hard ");
    scanf("%d", &dificulty);
    if (dificulty == 1){
        guessLimit = 10;
    }else if (dificulty == 2){
    
        guessLimit = 6;
    }
    else if (dificulty == 3)
    {
        guessLimit = 3;
    }
    printf("\n-=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=-\n");

    //game
    printf("\n-=-=--=Start=--=-=-\n");
    srand(time(0));
    secretNumber = rand() %101 + 1;
    printf("%d\n", secretNumber);
    printf("\n choode your guess: ");
    scanf("%d", &guess);
    int limit = guessLimit + 1;
    for(int i = 0; i <= guessLimit; i++){
        if (guessLimit == 0)
        {
            printf("\nGAME OVER");
            break;
        }
        else if( guess == secretNumber){
            printf("\nComgratulations\nYou got it right");            
            break;
        }
        else if (guess > secretNumber)
        {
            limit--;
            printf("\nguess too high\n you got %d guess", limit);
            printf("\n choode other guess: ");
            scanf("%d", &guess);
            
        }
        else{
            limit--;
            printf("\nguess too low\n you got %d guess", limit);
            printf("\n choode other guess: ");
            scanf("%d", &guess);
            
        }  
    }
    printf("\nEND GMAE");


 
    //end of the game 
}
