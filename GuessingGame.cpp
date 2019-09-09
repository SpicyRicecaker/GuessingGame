/*Author: Andy Li
  Date: 9/9/2019
  GuessingGame: A program that generates a random number that the user then tries to guess.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

//The Main Function of GuessingGame
int main()
{
  //Make variables to store the rng, userguess, and the number of guesses
  int GuessedNum, ActualNum, NumOfGuesses;

  //Making a boolean for running to restart the guessing process later if needed
  char pl = 'y';
  bool running = true;

  //game loop
  while (running){
    //Generates random seed as a function of time
    srand (time(NULL));

    //Genarates random number from 0-100 inclusive using the seed
    ActualNum = rand() % 101;

    //While the user has not guessed the number
    while (GuessedNum != ActualNum){

      //Ask the user to guess a number and store the input
      cout << "Please enter a number." << endl;
      cin >> GuessedNum;

      //If it is too high or too low say so
      if (GuessedNum > ActualNum){
	cout << "Too High!" << endl;
      }else if (GuessedNum < ActualNum){
	cout << "Too Low!" << endl;
      }
      //Increment Guesses
      NumOfGuesses++;
    }
    //Once the user has guessed the num send a toast and ask if they want to play again
    cout << "Congrats! You guessed the number *" << ActualNum << " *in *" << NumOfGuesses << "* tries!" << endl;
    cout << "Do you want to play again? (Y/N)" << endl;
    cin >> pl;

    //If they said no end game, otherwise the game loop continues
    if(pl == 'N' || pl == 'n'){
      running = false;
    }
   
  }
  return 0;
}
