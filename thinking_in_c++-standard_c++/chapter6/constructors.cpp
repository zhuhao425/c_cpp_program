#include <iostream>

using namespace std;

class Tree
{
    int height;

public:
    Tree(int initialHeight);
    ~Tree();
    void grow(int years);
    void printSize();
};

Tree::Tree(int initialHeight)
{
    height = initialHeight;
}

Tree::~Tree()
{
    cout << "inside Tree destructor" << endl;
    printSize();
}

void Tree::grow(int years)
{
    height += years;
}

void Tree::printSize()
{
    cout << "Tree height is " << height << endl;
}

int main()
{
    cout << "before opening brace" << endl;
    {
        Tree t(12);
        cout << "after Tree creation" << endl;
        t.printSize();
        t.grow(4);
        cout << "before closing brace" << endl;
    }
    cout << "after closing brace" << endl;
    return 0;
}