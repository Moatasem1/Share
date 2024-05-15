#include "tree.h"
#include <iostream>
using namespace std;

void main()
{
	tree t;
	cout<<t.is_empty()<<endl;
	t.add(5);
	t.add(7);
	t.add(3);
	t.add(8);
	t.add(1);
	t.add(2);
	t.add(8);
	t.add(9);
	cout<<t.is_empty()<<endl;
	t.preorder();
	cout<<endl;
	t.inorder();
	cout<<endl;
	cout<<"size "<<t.size()<<endl;
}