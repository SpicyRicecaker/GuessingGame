#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  int GuessedNum, ActualNum, NumOfGuesses;

  char pl = 'y';
  bool running = true;

  while (running){
    srand (time(NULL));

    ActualNum = rand() % 101;

    while (GuessedNum != ActualNum){
    
      cout << "Please enter a number." << endl;
      cin >> GuessedNum;

      if (GuessedNum > ActualNum){
	cout << "Too High!" << endl;
      }else if (GuessedNum < ActualNum){
	cout << "Too Low!" << endl;
      }

      NumOfGuesses++;
    }
    cout << "Congrats! You guessed the number " << ActualNum << " in " << NumOfGuesses << "tries!" << endl;
    cout << "Do you want to play again? (Y/N)" << endl;
    cin >> pl;

    if(pl == 'N' || pl == 'n'){
      running = false;
    }
   
  }
  return 0;
}
