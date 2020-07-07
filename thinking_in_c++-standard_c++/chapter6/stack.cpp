#include "stack.h"

#include <cassert>
using namespace std;

Stack::Link::Link(void *dat, Link *nxt)
{
    data = dat;
    next = nxt;
}

Stack::Link::~Link(){}

Stack::Stack()
{
    head = 0;
}

void Stack::push(void *dat)
{
    head = new Link(dat, head);
}

void* Stack::peek()
{
    assert(0 != head);
    return head->data;
}

void* Stack::pop()
{
    if(0 == head)
        return 0;
    void *result = head->data;
    Link *oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}

Stack::~Stack()
{
    assert(head == 0);
}