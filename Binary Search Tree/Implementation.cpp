#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int x;
  Node* left;
  Node* right;

  Node (int x)
  {
    this->x = x; 
    left = right = NULL; 
  }
};


void printIO(Node * root)
{
  if(root==NULL)
  {
    return;
  }
	printIO(root->left);
	cout << root-> x <<" ";
	printIO(root->right);
}


Node* bstin(Node* root, int x)
{
  if(root==NULL){
	  return new Node(x);
	}
 
	if(x < root->x){
		root->left = bstin(root->left,x);
	}
	else{
		root->right = bstin(root->right,x);
	}
	return root;

}



int main()
{

Node* root = NULL;
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
  cin>>arr[i];
}

  for(auto i: arr)
  {
    root = bstin(root, i);
  }
  printIO(root);
 return 0;
}