#include<iostream>
#include<string>
#include <stdlib.h>

using namespace std;
int main(){

  int iSecret, iGuess, attempts=0;

  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  iSecret = rand() % 100 + 1;
while(iGuess!=iSecret){
    cout << "What is your guess?" << endl;
    cin >> iGuess;
    attempts++;
    cout << "Wrong!" << endl;
}
    return 0;
    cout << "The total of attemps: " << attempts << endl;

}
