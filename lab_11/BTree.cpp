#include <iostream>
#include "Btree.h"

using namespace std;

BTree::BTree() {
root = NULL;
}

BTree::~BTree() {
destroy_tree();
}

void BTree::insert(int key) {
    if (root != NULL) {
        insert (key, root);
    }
    root = new Node;
    root ->key_value = key;
    root ->left = NULL;
    root -> right = NULL;
}
void BTree::destroy_tree() {
    destroy_tree(root);
}
Node *BTree::search(int key) {
    return search(key, root);
}
Node *BTree::BTree_root() {
return root;
}
void BTree::destroy_tree(Node* leaf) {
    if (leaf!= NULL) {
        destroy_tree(leaf->right);
        destroy_tree(leaf->left);
        delete leaf;
    }
}
void BTree::insert(int key, Node* leaf) {
    if (key < leaf -> key_value) {
        if (leaf->left  != NULL) {
            insert(key, leaf->left);
        }
        else {
            leaf->left = new Node;
            leaf->left->key_value = key;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }
    else if (key >= leaf -> key_value) {
        if (leaf->right != NULL) {
            insert(key, leaf->right);
        }
        else {
            leaf->right = new Node;
            leaf->right->key_value = key;
            leaf->right->right = NULL;
            leaf->right->left = NULL;
        }
    }
}
Node *BTree::search(int key, Node* leaf) {
    if (leaf!= NULL) {
        if (key == leaf-> key_value) {
            return leaf;
        }
        if (key < leaf -> key_value) {
            return search(key, leaf->left);
        }
        else {
            return search(key, leaf->right);
        }
    }
    else {
        return NULL;
    }
}

