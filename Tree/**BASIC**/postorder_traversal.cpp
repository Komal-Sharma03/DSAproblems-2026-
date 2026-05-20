#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int v)
    {
        data = v;
        left = right = nullptr;
    }
};


void postOrder(Node *node, vector<int> &res)
{
    if (node == nullptr)
        return;

    postOrder(node->left, res);

    postOrder(node->right, res);

    res.push_back(node->data);
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    vector<int> result;
    postOrder(root, result); 

    for (int val : result)
        cout << val << " ";

    return 0;
}

