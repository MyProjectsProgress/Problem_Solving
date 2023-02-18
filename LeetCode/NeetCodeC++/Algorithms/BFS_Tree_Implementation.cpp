#include <iostream>
#include <queue>

using namespace std;

struct node {
    int data;
    node* left, * right;
};

void bfs(node* root) {
    queue<node*> q;

    q.push(root);

    while (!q.empty()) {
        node* current = q.front();
        cout << current->data;
        q.pop();
        if (root->left != NULL) q.push(root->left);
        if (root->right != NULL) q.push(root->right);
    }
    return;
}

int main()
{
    

    return 0;
}
