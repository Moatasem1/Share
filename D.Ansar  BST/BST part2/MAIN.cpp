#include "tree.h"
#include <iostream>
using namespace std;

void main()
{
	tree t;
	cout<<t.empty()<<endl;
	t.add(5);
	t.add(3);
	t.add(7);
	t.add(4);
	t.add(6);
	t.add(7);
	t.add(9);
	cout<<t.empty()<<endl;
	t.preorder();
	cout<<endl;
	t.inorder();
	cout<<endl;
	cout<<"Size "<<t.size()<<endl;
	cout<<"Height "<<t.height()<<endl;
	cout<<"search "<<t.search(50)<<endl;
	cout<<"Copy"<<endl;
	tree t2;
	t2.copy_tree(t);
	t.inorder();
	cout<<endl;
	t2.inorder();
	cout<<endl;
	cout<<"Delete"<<endl;
	t2.delete_tree();
	cout<<t2.height()<<endl;

}