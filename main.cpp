#include <iostream>
#include "Process.h"

using namespace std;

int main()
{
  cout << endl;
  cout << "Please enter the name of the file that you would like to use for the simulation." << endl;
  string fileName;
  getline(cin, fileName);
  cout << endl;

  Process p;

  p.readFile(fileName);

  p.runSim();

}
