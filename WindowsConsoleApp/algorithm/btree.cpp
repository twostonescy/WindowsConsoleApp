#include "btree.h"
#include "../common/head.h"


BTree::BTree(int aa,int bb,string dd)
{
    a = aa;
    b = new At();
    b->b = bb;
    d = new string(dd);
    pp("initialize" + to_string((int)this));
}

BTree::BTree(const BTree &rhs)
{
    a = rhs.a;
    b = rhs.b;
    c = rhs.c;
    d = rhs.d;
    pp("copy" + to_string((int)this));
}

BTree::BTree(BTree &&rhs)  noexcept :
    a(rhs.a),
    b(rhs.b),
    c(rhs.c),
    d(rhs.d)
{
    rhs.b = NULL;
    rhs.d = NULL;
    pp("move" + to_string((int)this));
}

BTree & BTree::operator=(BTree && rhs) noexcept
{
    if (this != &rhs)
    {
        delete b;
        delete d;
        a = rhs.a;
        b = rhs.b;
        c = rhs.c;
        d = rhs.d;
        rhs.b = NULL;
        rhs.d = NULL;
    }
    return *this;
}

BTree BTree::show(BTree h)&&
{
    a = 4;
    BTree kl(5, 6, "77");
    h.a = 8;
    return kl;
}


BTree::~BTree()
{
    delete b;
    delete d;
    pp("delete"+to_string((int)this));
}
