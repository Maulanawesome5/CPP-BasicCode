#include <iostream>
#include <string>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* create_node(int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->left = new_node->right = nullptr;
    return new_node;
}

void print_tree_preorder(Node* root)
{
    if(root == nullptr) return;

    cout << root->data << endl;
    print_tree_preorder(root->left);
    print_tree_preorder(root->right);
}

void print_tree_inorder(Node* root)
{
    if(root == nullptr) return;

    print_tree_inorder(root->left);
    cout << root->data << endl;
    print_tree_inorder(root->right);
}

int main(int argc, char const *argv[])
{
    /**
     * @brief Belajar struktur data dan algoritma TREE
     * TREE merupakan struktur data yang merepresentasikan hierarchy.
     * Di dalam konteks pemrograman, TREE merupakan algoritma untuk membuat
     * hierarchy data, melakukan searching, dan organize data berdasarkan kasta
     * parent dan child.
     * 
     * @warning keyboard error -> g, G, h, H, '_', "_"
     */

    Node* root = create_node(1); // hirarki pertama (level 1)

    root->left = create_node(2); // hirarki kedua (level 2)
    root->right = create_node(3);

    root->left->left = create_node(4); // hirarki ketiga (level 3)
    root->left->right = create_node(5);
    root->right->left = create_node(6);
    root->right->right = create_node(7);

    root->left->right->left = create_node(9); // hirarki keempat (level 4)
    root->right->right->left = create_node(15);

    print_tree_preorder(root);
    cout << endl;
    print_tree_inorder(root);


    return 0;
}
