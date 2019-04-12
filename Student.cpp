#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student()
{
  timeArrived = 0;
  timeNeeded = 0;
  waitTime = 0;
  windowNumber = 5;
}

Student::Student(int arrive, int needed, int wait, int window)
{
  timeArrived = arrive;
  timeNeeded = needed;
  waitTime = wait;
  windowNumber = window;
}

Student::~Student()
{
  //do stuff here
}

int Student::getTimeArrived()
{
  return timeArrived;
}

int Student::getTimeNeeded()
{
  return timeNeeded;
}

void Student::toString()
{
  cout << "arrival: " << timeArrived << "  needed: " << timeNeeded << endl;
}
