#include <iostream>

using namespace std;

template <class T>
class ListNode
{
  public:
    T data;
    ListNode *next; //pointer to next
    ListNode *prev; //pointer to previous

    ListNode()
    {
      //default constructor
      /*data = T();
      ListNode *next = NULL;
      ListNode *prev = NULL;*/
    }
    ListNode(T d) //overload constuctor
    {
      data = d;
      next = NULL; //some compilers take nullptr
      prev = NULL;
    }
    ~ListNode()
    {
      // destructor
    }
};
