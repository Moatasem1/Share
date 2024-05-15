#include "tree.h"
#include <iostream>
using namespace std;

tree::tree()
{
	root=0;
}
bool tree::is_empty()
{
	return root==0;
}
bool tree::add(int el)
{
	return add(el,root);
}
bool tree::add(int el,node *&r)
{
	if(r==0)
	{
		r=new node(el);
		return true;
	}
	if(el==r->data)
		return false;
	if(el<r->data)
		return add(el,r->left);
	if(el>r->data)
		return add(el,r->right);
}

void tree::preorder()
{
	pre(root);
}
void tree::pre(node *r)
{
	if(r!=0)
	{
	cout<<r->data<<" ";
	pre(r->left);
	pre(r->right);
	}
}

void tree::inorder()
{
	in(root);
}
void tree::in(node *r)
{
	if(r!=0)
	{
	in(r->left);
	cout<<r->data<<" ";
	in(r->right);
	}
}

int tree::size()
{
	return size(root);
}
int tree::size(node *r)
{
	if(r==0)
		return 0;
	return 1+size(r->left)+size(r->right);
}


/*
	void postorder();
	bool search(int el);
	int height();
	void delete_tree();
	void copy_tree(tree &o);
	*/