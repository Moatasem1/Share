struct node
{
	int data;
	node *left,*right;
	node(int d,node *l=0,node *r=0)
	{	data=d;	left=l;	right=r;	}
};

class tree
{
	node *root;
	bool add(int el,node *&r);
	void tree::pre(node *r);
	void tree::in(node *r);
	int tree::size(node *r);
public:
	tree();
	bool is_empty();
	bool add(int el);
	void preorder();
	void postorder();
	void inorder();
	bool search(int el);
	int size();
	int height();
	void delete_tree();
	void copy_tree(tree &o);
	//~tree();
	//tree(tree &o);
	//void operator=(tree &o);
};
