#ifndef STASH_H

#define STASH_H

class Stash
{
    int size;
    int quantity;
    int next;

    unsigned char *storage;
    void inflate(int increase);

public:
    Stash(int size);
    Stash(int size,int initQuantity);
    ~Stash();
    int add(void *element);
    void *fetch(int index);
    int count();
};

#endif