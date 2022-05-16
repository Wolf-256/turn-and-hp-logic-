#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main() {

  string alphabetString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string alphabetArray[26];
  for (int i = 0; i < alphabetString.length(); i++){
  alphabetArray[i]=alphabetString[i];
  }
  int alphabetSize = alphabetString.length();
  string userInputs[alphabetSize];
  int turnNumber = 0;
  int healthPoints = 99;
   
  cout << alphabetSize << "\n";
  cout << "first letter of array is  " << alphabetArray[0] << "\n";
  cout << "last letter of array is  " << alphabetArray[25] << "\n";

  do{
   cout << "GAME HERE" << "\n";
  cout << "TURN:  "<< turnNumber << "\n";
  cout << "TURN:  "<< healthPoints << "\n";
  turnNumber++;
  healthPoints -= 9;
  }while (healthPoints>0);
  
    return 0;
}
