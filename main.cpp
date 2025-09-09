//
//  CSC2210-003
//  Dr. Hasker
//  Fall 2025
//
//  Author: Anthony Higareda
//  SPA 1: Fluid Tracking
//  Created: 05 September 2025
//  Edited: 09 September 2025
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  string time, fluidType; // Time of fluid intake/output and the type of fluid
  int fluidVolume;        // Volume of fluid taken from the file
  int totalIntake = 0;    // Total amounts of fluid intake and output
  int totalOutput = 0;

  //  https://www.geeksforgeeks.org/dsa/how-to-check-if-an-array-contains-a-value-or-not/
  //  Referenced this GFG article to use a vector for array searching
  //  Will make identifying output fluids much easier later on
  //  The 3 types of fluid that can be outputs
  vector<string> outputFluids{"urine", "bloodloss", "diarrhea"};

  while (cin >> time >> fluidType >> fluidVolume) {  //  Pulls from console input and assigns values
    // to time, fluidType, and fluidVolume, then keeps iterating until the console is empty.

    //  https://www.geeksforgeeks.org/cpp/check-if-vector-contains-given-element-in-cpp/
    //  Referenced this GFG article for help finding a matching output fluid name
    //  in the outputFluids vector.
    //  If count() evaluates to be nonzero, then the fluid
    //  we have pulled from the console is an output fluid.
    const bool wasOutput = count(begin(outputFluids), end(outputFluids), fluidType) > 0;

    //  Adds the fluid volume to totalOutput or totalInput
    //  depending on which kind of fluid was detected
    if (wasOutput)
      totalOutput += fluidVolume;
    else
      totalIntake += fluidVolume;


    //  Reports to the console whenever the fluid intake differential exceeds 1000 ml
    //  and only when the fluid being processed was an intake fluid
    if (!wasOutput && totalIntake >= totalOutput + 1000)
        cout << "after consuming " << fluidType << " at " << time <<
            ", intake exceeds output by " << totalIntake - totalOutput << " ml" << endl;

  }

  //  Report the final result to the user
  cout << "the final fluid differential is " << totalIntake - totalOutput << " ml" << endl;

  return 0;

}