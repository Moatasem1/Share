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
	bool tree::rec_add(int el,node *&r);
	void tree::pre(node *r);
	void tree::in(node *r);
	int tree::size(node *r);
	int tree::height(node *r);
	bool tree::search(int el,node *r);
	void tree::copy(node *or,node *&r);
	void tree::delete_t(node *&r);
public:
	tree();
	bool empty();
	bool add(int el);
	void preorder();
	void inorder();
	void postorder();
	int size();
	int height();
	bool search(int el);
	void delete_tree();
	void copy_tree(tree &o);
	//~tree();
	//tree(tree &o);
	//void operator=(tree &o);
};