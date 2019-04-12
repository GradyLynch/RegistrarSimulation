#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

template <class T>
class Queue
{
  public:
    Queue() //default
    {
      DoublyLinkedList<T> myQueue;
    }
    ~Queue() //destructor
    {
      //build some character
    }

    void insert(T d) //aka enqueue()
    {
      myQueue.insertBack(d);
    }
    T remove() //aka dequeue()
    {
      myQueue.removeFront();
    }
    T getFront() //aka peek()
    {
      myQueue.getFront();
    }

    int getSize()
    {
      return myQueue.getSize();;
    }
    bool isEmpty()
    {
      return (myQueue.getSize() == 0);
    }

    DoublyLinkedList<T> myQueue;
};
