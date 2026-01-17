#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = nullptr;
    }

    Node* insert(Node* node, int value) {
        if (node == nullptr)
            return new Node(value);

        if (value < node->data)
            node->left = insert(node->left, value);
        else if (value > node->data)
            node->right = insert(node->right, value);

        return node;
    }

   
    void inorder(Node* node) {
        if (node != nullptr) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }
};

int main() {
    BST tree;
    tree.root = tree.insert(tree.root, 8);
    tree.insert(tree.root, 3);
    tree.insert(tree.root, 10);
    tree.insert(tree.root, 1);
    tree.insert(tree.root, 6);
    tree.insert(tree.root, 14);
    tree.insert(tree.root, 4);
    tree.insert(tree.root, 7);
    tree.insert(tree.root, 13);

    cout << "Inorder Traversal of BST: ";
    tree.inorder(tree.root);
    cout << endl;

    return 0;
}
