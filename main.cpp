//
// CSC2210-003
// Dr. Hasker
// Fall 2025
//
// Author: Anthony Higareda
// SPA 1: Fluid Tracking
// Created: 05 September 2025
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {

  string time, fluidType;   // Time of fluid intake/output and the type of fluid
  int fluidIntake, fluidOutput; // Total amounts of fluid intake and output

  string outputFluids[] = {"urine", "bloodloss", "diarrhea"};
  // The 3 types of fluid that can be outputs

  ifstream file("data.txt");  // Open the input data text file

  if (!file.is_open()) {  // Verifies the file was opened successfully
    cout << "File could not be opened" << endl;
  }

  file >> time >> fluidType >> fluidIntake; // Pulls from the file stream and assigns the values
  cout << "the final fluid differential is " << fluidIntake << " ml" << endl; // Report to the user

  return 0;

}
