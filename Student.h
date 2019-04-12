#include <iostream>
#include <string>

using namespace std;

class Student
{
  public:
    Student();
    Student(int arrive, int needed, int wait, int window);
    ~Student();

    int timeArrived;
    int timeNeeded;
    int waitTime;
    int windowNumber;

    int getTimeArrived();
    int getTimeNeeded();
    void toString();
};
