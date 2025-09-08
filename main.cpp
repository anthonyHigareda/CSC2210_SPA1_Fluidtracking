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
#include <vector>
#include <algorithm>
using namespace std;


int main() {

  string time, fluidType;   // Time of fluid intake/output and the type of fluid
  int fluidVolume, totalIntake, totalOutput; // Total amounts of fluid intake and output

  //  https://www.geeksforgeeks.org/dsa/how-to-check-if-an-array-contains-a-value-or-not/
  //  Referenced this GFG article to use a vector for array searching
  //  Will make identifying output fluids much easier later on
  //  The 3 types of fluid that can be outputs
  vector<string> outputFluids{"urine", "bloodloss", "diarrhea"};

  ifstream file("data.txt");  // Open the input data text file.
  // NOTE: the data file must be inside "\cmake-build-debug" for whatever
  // frickin reason, I don't know how that will interact with eSubmit.

  if (!file.is_open()) {  // Verifies the file was opened successfully
    cout << "File could not be opened" << endl;
  }

  while (file >> time >> fluidType >> fluidVolume) {  // Pulls from the file stream and assigns values
    // to time, fluidType, and fluidVolume, then keeps iterating until the file stream is empty.

    //  https://www.geeksforgeeks.org/cpp/check-if-vector-contains-given-element-in-cpp/
    //  Referenced this GFG article for help finding a matching output fluid name
    //  in the outputFluids vector.
    //  If count() evaluates to 1, then the fluid we have pulled from the file
    //  is considered and output fluid.
    if (count(begin(outputFluids), end(outputFluids), fluidType) > 0) {


    }

  }

  return 0;

}