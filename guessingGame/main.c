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
  printf("\n1-)Easy (guess limit 10) \n2-)Normal (guess limit 6) \n3-)Hard (guess limit 3\n===> ");
  scanf ("%d", &difficulty);
  if (difficulty == 1)
    {
      guessLimit = 9;
    }
  else if (difficulty == 2)
    {
      guessLimit = 5;
    }
  else if (difficulty == 3)
    {
      guessLimit = 2;
    }
  //start oh the game
  int guessCount = 0;
  int guess;
  srand(time(NULL));
  int computerThink = rand() %5 + 1;
  int score = 10;
  printf("computer: %d", computerThink);
  printf("\n------------------------");
  printf("\n-guess the scret number-");
  printf("\n------------------------");
  printf("\nchoose your guess:");
  scanf("%d", &guess);
  while (guess != computerThink && guessCount < guessLimit){
    score--;
    if (guess < computerThink){
      
      printf("\nCold! Your kick was too low");      
      printf("\n---------------------------");
      score--;
    }
    if (guess > computerThink)
    {
      printf("\nCold Your kick was too high");
      printf("\n---------------------------");
      score--;
    }
    
    printf("\nchoose your guess:");
    scanf("%d", &guess);
    guessCount ++;
  }   
  //end of the game
  if (guess == computerThink)
  {
    printf("\n-----------------------");
    printf("\n\tYou win!!");
    printf("\n  **Congratulations**");
    printf("\n     Score ==== %d ",score);
    printf("\n-----------------------");
  }
  else{
    printf("\n-----------------------");
    printf("\n\tYou lose!");
    printf("\nsecreat number is ==> %d", computerThink);
    printf("\n-----------------------");
  }    
  system("pouse");
}


 

 

 