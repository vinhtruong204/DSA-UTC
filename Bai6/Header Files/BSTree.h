#ifndef BSTREE_H
#define BSTREE_H
#include <string>
#include <fstream>
#include "BSTNode.h"

using namespace std;

template <class Keys, class T>
class BSTree
{
private:
    BSTNode<Keys, T> *root;
    int n;

public:
    BSTree();
    ~BSTree();
    int size();
    int isEmpty();
    int isInternal(BSTNode<Keys, T> *p);
    int isExternal(BSTNode<Keys, T> *p);
    int isRoot(BSTNode<Keys, T> *p);
    BSTNode<Keys, T> *search(Keys k, BSTNode<Keys, T> *p);
    BSTNode<Keys, T> *getRoot();
    bool search(Keys k);
    BSTNode<Keys, T> *insert(Keys k, T e, BSTNode<Keys, T> *temp, BSTNode<Keys, T> *parent);
    void insert(Keys k, T e);
    BSTNode<Keys, T> *getMinRight(BSTNode<Keys, T> *p);
    void remove(BSTNode<Keys, T> *tmp);
    void remove(Keys k);
    void preOrder(BSTNode<Keys, T> *p, ofstream &f);
    void preOrder();
    void inOrder(BSTNode<Keys, T> *p, ofstream &f);
    void inOrder();
    void postOrder(BSTNode<Keys, T> *p, ofstream &f);
    void postOrder();
};

#endif