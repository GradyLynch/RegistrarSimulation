#include <iostream>
#include "ListNode.h"

using namespace std;

template <class T>
class DoublyLinkedList
{
  public:
    ListNode<T> *front;
    ListNode<T> *back;
    unsigned int size;

    DoublyLinkedList()
    {
      front = new ListNode<T>();
      back = new ListNode<T>();
      size = 0;
    }
    ~DoublyLinkedList()
    {
      //build some character
      //doubly linked list differ a bit from a single linked list
      //clear(); is a function from the example that clears the list
      delete front;
      delete back;
    }
    void insertFront(T d)
    {
      ListNode<T> *node = new ListNode<T>(d);

      if(isEmpty())
      {
        front = node;
        back = node;
        node->next = NULL;
        node->prev = NULL;
      }
      else
      {
        ListNode<T> *actualFirst = front;

        front = node;
        node->next = actualFirst;
        actualFirst->prev = node;
        node->prev = NULL;
      }
      size++;
    }
    void insertBack(T d)
    {
      ListNode<T> *node = new ListNode<T>(d);

      if(isEmpty())
      {
        front = node;
      }
      else
      {
        back->next = node;
        node->prev = back;
      }

      back = node;

      size++;
    }
    T removeFront()
    {
      --size;
      T temp = front -> data;
      ListNode<T> *ft = front;
      front = front -> next;
      ft -> next = NULL;
      delete ft;
      return temp;
    }
    void removePosition(int pos)
    {
      ListNode<T> *curr = front;

      for(int i = 0; i < pos; i++)
      {
        curr = curr -> next;
      }

      if(curr == NULL)
      {
        cout << "removePosition Error: Position is NULL" << endl;
        return;
      }

      //we found our ListNode
      if(curr == front)
      {
        front = curr -> next;
      }
      else
      {
        curr -> prev -> next = curr -> next;
      }

      //check if back ListNode
      if(curr == back)
      {
        back = curr -> prev;
      }
      else
      {
        curr -> next -> prev = curr -> prev;
      }
    }
    void deleteNode(T d)
    {
      int pos = find(d);
      removePosition(pos);
    }
    void printList()
    {
      ListNode<T> *curr = front;

      while(curr != NULL)
      {
        cout << curr -> data << " ";
        curr = curr -> next;
      }
      cout << endl;
    }
    int find(T d) //search method
    {
      int index = -1;
      ListNode<T> *curr = front;

      while(curr != NULL)
      {
        ++index;
        if(curr -> data == d)
        {
          break;
        }
        else
        {
          curr = curr -> next;
        }
      }

      if(curr == NULL)
      {
        index = -1;
      }
      return index;
    }
    bool isEmpty()
    {
      return (size == 0);
    }
    unsigned int getSize()
    {
      return size;
    }
    T getFront()
    {
      return front->data;
    }
};
