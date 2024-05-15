#include "tree.h"
#include <iostream>
using namespace std;
tree::tree()
{
	root=0;
}
bool tree::empty()
{
	return root==0;
}
bool tree::add(int el)
{
	return rec_add(el,root);
}
bool tree::rec_add(int el,node *&r)
{
	if(r==0)
	{
		r=new node(el);
		return true;
	}
	if(el==r->data)
		return false;
	if(el<r->data)
		return rec_add(el,r->left);
	if(el>r->data)
		return rec_add(el,r->right);
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

int tree::height()
{
	return height(root);
}
int tree::height(node *r)
{
	if(r==0)
		return -1;
	int hl=height(r->left);
	int hr=height(r->right);
	if(hl>hr)
		return hl+1;
	return hr+1;
}

bool tree::search(int el)
{
	return search(el,root);
}
bool tree::search(int el,node *r)
{
	if(r==0)
		return false;
	if(el==r->data)
		return true;
	if(el<r->data)
		return search(el,r->left);
	if(el>r->data)
		return search(el,r->right);
}

void tree::copy_tree(tree &o)
{
	if(o.root==0)
		root=0;		//assuming that tree to copied is empty
	else
		copy(o.root,root);
}
void tree::copy(node *or,node *&r)
{
	if(or!=0)
	{
		r=new node(or->data);
		copy(or->left,r->left);
		copy(or->right,r->right);
	}
}

void tree::delete_tree()
{
	delete_t(root);
}
void tree::delete_t(node *&r)
{
	if(r!=0)
	{
		delete_t(r->left);
		delete_t(r->right);
		delete r;
		r=0;
	}
}


/*
	void postorder();
	//~tree();
	//tree(tree &o);
	//void operator=(tree &o);
	*/