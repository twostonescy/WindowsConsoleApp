#pragma once
#include "../common/head.h"
struct At
{
    int b;
};

class BTree
{
public:
    BTree(int a=0, int b=0, string d="00");
    BTree(const BTree&) ;
    BTree(BTree&&) noexcept;
    BTree &operator=(BTree &&rhs) noexcept;
    BTree show(BTree h)&&;
    template<class T>
    double dem(const vector<T> &vec);
    ~BTree();
    int a;
    At *b;
    string c;
    string *d;
};

template<class T>
 double BTree::dem(const vector<T>& vec)
{
    return 0.0;
}
