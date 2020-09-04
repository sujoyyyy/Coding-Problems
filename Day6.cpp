/*Good morning! Here's your coding interview problem for today.
This problem was asked by Google.
An XOR linked list is a more memory efficient doubly linked list. Instead of each node holding next and prev fields, it holds a field named both, which is an XOR of the next node and the previous node. Implement an XOR linked list; it has an insert(element) which adds the element to the end, and a get(index) which returns the node at index.*/
#include <bits/stdc++.h> 
#include <inttypes.h> 
using namespace std; 
class Node 
{ 
	public: 
	int data; 
	Node* npx; /* XOR of next and previous node */
};
Node* head=NULL;

Node* XOR (Node *a, Node *b) 
{ 
	return (Node*) ((uintptr_t) (a) ^ (uintptr_t) (b)); 
} 

void insert(int data) 
{ 
	Node *new_node = new Node(); 
	new_node->data = data; 
    new_node->npx=NULL;

	if(head==NULL)
	{
		head=new_node;
		head->npx=NULL;
	}
	else
	{
		Node *curr = head; 
	    Node *prev = NULL; 
	    Node *next; 
		while (curr->npx != NULL) 
			{ 
				next = XOR (prev, curr->npx); 
				prev = curr; 
				curr = next; 
			} 
		curr->npx = XOR(prev,new_node);
	}
	
	
} 
Node* get(int index)
{
	int i=0;
	Node *curr = head; 
	Node *prev = NULL; 
	Node *next; 
	while (i!=index) 
    {   
		i++;
		next = XOR (prev, curr->npx); 
		prev = curr; 
		curr = next; 
	} 
  return curr;
}
void printList (Node *head) //to printlist
{ 
	Node *curr = head; 
	Node *prev = NULL; 
	Node *next; 

	cout << "Following are the nodes of Linked List: \n"; 

	while (curr->npx!=0) 
	{ 
		cout<<curr->data<<" ";
		next = XOR (prev, curr->npx); 
		prev = curr; 
		curr = next; 
	} 
	cout<<next->data;
	cout<<endl;
} 

// Driver code 
int main () 
{ 
	
	insert(10); //insert function to insert values;
	insert(20); 
	insert(30); 
	insert(40);
	insert(50);
	printList(head);
	Node* p = get(4);//pass index to the get function
	cout<<"The data at index 4 is "<<p->data<<endl;

	return (0); 
} 

