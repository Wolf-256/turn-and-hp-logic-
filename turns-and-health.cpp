#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main() {

  string alphabetString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string alphabetArray[26];
    int temp;
    temp = alphabetString.length();
    int alphabetSize = temp;
  for (int i = 0; i < temp; i++){
  alphabetArray[i]=alphabetString[i];
  }

  string userInputs[alphabetSize];
  int turnNumber = 0;
  int healthPoints = 99;
  //default value for HP (healthPoints)
   
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
      turnNumber++;
          cout << "NEXT" << "\n";
  // block of code to be executed if user enters a blank inpur or lack of input
  //adds turn, but does not damage player if no wrong inout is entered
} else if (userInputs[j]==alphabetArray[0]) {
    //break;
    cout << alphabetArray[0]<< "!!!!" << "\n";
    //test condiontion
    
    
  // block of code to be executed if the condition is the values are true / fit answer
      //hangman style word game logic
        //adds turn
        turnNumber++;
        break;
} else {
    //break;
  // block of code to be executed if the ccondition is the values are NOT true
      //damage palyer
       //adds turn
       turnNumber++;
       break;
}
    
    
    
   }
  //break;
  
  //turnNumber++;
  healthPoints -= 9;
  }while (healthPoints>0);
  cout <<  "\n";cout <<  "\n"; cout <<  "\n";
  cout << "GAME OVER!" << "\n";
  
    return 0;
}
