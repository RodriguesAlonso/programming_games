#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Rules
The computer will think of a number, and you, the player, will need guess it.
Which each error, the machine will tell you whether the number kicked was greater or lower than thought.
You also be able to choose the difficulty level of the game, that will give you more or less opportunities to kick a number. 
At the end, if you win, the computer will tell you know how many points you have made, based on in how good your kicks were.
  */

int main(){
   //Presentation 
    printf("******************************");
    printf("\n*welcome to the guessing game*");
    printf("\n******************************");
  //choise of difficulty
  int difficulty;
  int guessLimit;  
  printf("\n\n-----------------------");
  printf("\n Choise the difficulty");
  printf("\n-----------------------");
  printf("\n1-)Easy 2-)Normal 3-)Hard\n===> ");
  scanf ("%d", &difficulty);
  if (difficulty == 1)
  {
    guessLimit = 10;
  }
  else if (difficulty == 2)
  {
    guessLimit = 6;
  }
  else if (difficulty == 3)
  {
    guessLimit = 3;
  }
  //start oh the game
  int guessCount = 0;
  int guess;
  srand(time(NULL));
  int computerThink = rand() %;
  printf("computer : %d", computerThink);
  printf("\nchoose your guess:");
  scanf("%d", guess);
  
  //end of the game    

}


 

 

 