#include <iostream>
using namespace std;

struct Node { //ejemplo de arboles
    int data;
    struct Node *left, *right; //definicion de nodo
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Preorder traversal
void preorderTraversal(struct Node* node) {
    if (node == NULL)
        return;

    cout << node->data << " -> ";//datos de arbol con nodo izquierda derecha
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

// Postorder traversal
void postorderTraversal(struct Node* node) {
    if (node == NULL)
        return;

    postorderTraversal(node->left);//datos de arbol izquierda derecha 
    postorderTraversal(node->right);
    cout << node->data << "-> ";
}
//Inorder traversal
void inorderTraversal(struct Node* node){//datos de arbol izquierda derecha
    if(node == NULL)
        return;
    
    inorderTraversal(node->left);
    cout << node->data << "->";
    inorderTraversal(node->right);
}


//construccion de nodos
int main() {
    struct Node* root = new Node(1);//generando las ramas con los nodos
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    cout << "Inorder traversal: ";
    inorderTraversal(root);//dando datos de los subarboles

    cout <<"/nPreorder trasversal ";
    preorderTraversal(root);//dando datos de los subarboles

    cout << "\nPostorder travesal ";
    postorderTraversal(root);//dando datos de los subarboles

};