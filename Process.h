#include <iostream>
#include <string>
#include <fstream>
#include "Queue.h"
#include "Student.h"
#include "Window.h"

using namespace std;

class Process
{
  public:
    DoublyLinkedList<Student*> *myList;
    int numberOfWindows;
    int numberOfStudents;


    Process();
    ~Process();
    void readFile(string fileName);
    void runSim();
};
