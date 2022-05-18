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
  int healthPoints = 90;
   
  cout << alphabetSize << "\n";
  cout << "first letter of array is  " << alphabetArray[0] << "\n";
  cout << "last letter of array is  " << alphabetArray[25] << "\n";

  do{
    
    // to do: nested loop
    
  cout << "GAME HERE" << "\n";
  cout << "TURN:  "<< turnNumber << "\n";
  cout << "HP:  "<< healthPoints << "\n";
  
   for (int j = 0; j < alphabetString.length(); j++){
    getline (cin, userInputs[j]);
    
    if (userInputs[j] == "") {
          cout << "NEXT" << "\n";
  // block of code to be executed if condition1 is true
} else if (userInputs[j]==alphabetArray[0]) {
    break;
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
    break;
  // block of code to be executed if the condition1 is false and condition2 is false
}
    
    
    
   }
  //break;
  
  turnNumber++;
  healthPoints -= 9;
  }while (healthPoints>0);
  cout <<  "\n";cout <<  "\n"; cout <<  "\n";
  cout << "GAME OVER!" << "\n";
  
    return 0;
}
