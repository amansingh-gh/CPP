#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    
    cout << "Enter data: " << endl;
    int data;
    cin >> data;
    
    if(data == -1){
        return NULL;
    }
    root = new node(data);

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);


    return root;
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

void preorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node* root){
    if(root == NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    node* root = NULL;

    // creating a tree
    // 1 3 7  -1 11 -1 -1 5 17 -1 -1 -1 -1
    root = buildTree(root);

    cout << "\nPrinting the level order traceful output \n"<< endl;
    levelOrderTraversal(root);

    cout << "\nPrinting inorder : "<< endl;
    inorder(root);

    cout << "\nPrinting preorder : "<< endl;
    preorder(root);

    cout << "\nPrinting postorder : "<< endl;
    postorder(root);
    return 0;
}