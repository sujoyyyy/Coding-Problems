/*Good morning! Here's your coding interview problem for today.
This problem was asked by Google.
Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.*/
#include <iostream> 
#include<stdlib.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
queue<string> q;
struct Node //defining node structure
{ 
	int key; 
	struct Node* left, *right; 
}; 

Node* newNode(int key) //new node creation
{ 
	Node* temp = new Node; 
	temp->key = key; 
	temp->left = temp->right = NULL; 
	return (temp); 
} 

    
string serialize(Node* root) {
        if(root == NULL)
            return "X#";
        string temp = to_string(root->key) + "#";
        temp+=serialize(root->left) + serialize(root->right);
        return temp;
    }

// Decodes your encoded data to tree.
    
Node* deserializeHelper(queue<string> & q)
{
        if(q.empty())
            return NULL;
        if(q.front() == "X"){
            q.pop();
            return NULL;
        }
        Node* root = newNode(stoi(q.front()));
        q.pop();
        root->left = deserializeHelper(q);
        root->right = deserializeHelper(q);
        return root;
        
    }
    
Node* deserialize(string data) 
{
    stringstream ss(data);
    string token;
    while(std::getline(ss, token, '#')) 
	q.push(token);
    return deserializeHelper(q); 
}


void inorder(Node *root) //inorder display left->root->right
{ 
    if (root) 
    { 
        inorder(root->left); 
        printf("%d ", root->key); 
        inorder(root->right); 
    } 
} 
/* Driver program to test above functions*/
int main() 
{  
	// Let us construct a tree 
	struct Node *root	 	 = newNode(2); 
	root->left			 	 = newNode(8); 
	root->right			 	 = newNode(9); 
	root->left->left	     = newNode(4); 
	root->left->right	     = newNode(1); 
	root->left->right->left  = newNode(3); 
	root->left->right->right = newNode(7); 

	printf("Inorder Traversal of the tree before encoding \n"); 
	inorder(root); 
	cout<<endl;
	string x;
        x=serialize(root);
	cout<<"Encoding"<<endl;
	cout<<x<<endl;
	Node *root1 = deserialize(x);
	printf("Inorder Traversal of the tree after decoding\n"); 
	inorder(root1);
	return 0; 
} 
