/*A Dictionary stores keywords & its meanings. Provide facility for adding new keywords, deleting
keywords, updating values of any entry. Provide facility to display whole data sorted in
ascending/ Descending order. Also find how many maximum comparisons may require for finding any
keyword. Use Height balance tree and find the complexity for finding a keyword */

#include<iostream>
using namespace std;

class node
{
    	string key;
    	string meaning;
    	node* left,*right;
    	int bf;

	public:
	    node()
	    {
		key="NO_WORD";
		meaning="NO_MEANING";
		left=right=NULL;
		bf=0;
	    }
	    friend class AVL;
};
class AVL
{
	node* root;
	
	public:
		AVL()
		{
			root=NULL;
		}
		void Insert(node*);
		void Display(node*);
		node* ret_root(AVL& obj)
	      	{
	      		return obj.root;
	      	}
	    	node* getData();
	    	void search(string);
	     	void ascending(node*);
	     	void descending(node*);
	     	int ret_bf(node* temp)
	     	{
		 	if(temp)
		   		return temp->bf;
	     	}
	    	void Delete(string,node*);
	    	node* successor(node*);
	    	int height(node*);
};
int AVL::height(node* node)
{
	if(node)
     		return 1+max(height(node->left),height(node->right));
}
node* AVL::successor(node* temp)
{
	node* current=temp;
	while(current->left!=NULL)
		current=current->left;
    	return current;
}
/*void AVL::Delete(string key1,node* root)
{
		if(root==NULL) 
			return;
	
		if(key1.compare(root->key)<0)
	      		Delete(key1,root->left);
	      		
	    	else if(key1.compare(root->key)>0)
			Delete(key1,root->right);
			
	    	else
	    	{
			//node with one or no child
			if((root->left==NULL)||(root->right==NULL))
			{
				node* temp=root->left?root->left:root->right;
			    	if (temp == NULL)
			    	{
			      		temp = root;
					root = NULL;
			   	}
			    	else // One child case
					*root = *temp; // Copy the contents of
				        // the non-empty child
			    		delete(temp);
			}
        		else
       			{
				//node with two children
				node* temp=successor(root->right);
			    	root->key=temp->key;
			    	root->meaning=temp->meaning;
			    	root->bf=temp->bf;
			    	Delete(root->right,temp->key);
        		}
    		}
     		
     		// If the tree had only one node then return
    	if (root == NULL)
      		return;
  
  //step 2: update balancing factor of root node
     root->bf=height(root->left)-height(root->right);
}*/
void AVL::descending(node* node)
{
	if(node)
    	{
		descending(node->right);
        	descending(node->left);
        	cout<<node->key<<" = " <<node->meaning<<endl;
    	}
}
void AVL::ascending(node* node)
{
	if(node)
    	{
		ascending(node->left);
        	cout<<node->key<<" = " <<node->meaning<<endl;
        	ascending(node->right);
    	}
}
void AVL::search(string key1 )
{
	node* temp=this->root;int flag=0;
    	while(temp!=NULL)
    	{
        	if(key1.compare(temp->key)>0)
        	{
           		temp=temp->right;
        	}
        	else if(key1.compare(temp->key)<0)
        	{
            		temp=temp->left;
        	}
        	else if(key1.compare(temp->key)==0)
        	{
            		flag=1;break;
        	}
         
         	if(flag==1)
                	cout<<key1<<" = " <<temp->meaning<<endl;
         	else if(flag==0)
            		cout<<"\nWord not found\n";
	}
}
node* AVL::getData()
{
	node* temp=new node;
	
    	cout<<"\nEnter word";
    	cin>>temp->key;
    	cout<<"\nEnter meaning";
    	cin>>temp->meaning;
    	
    	temp->left=temp->right=NULL;
    	temp->bf=0;
    	
    	return temp;
}
void AVL::Display(node* node)
{
	if(node)
	{
        	Display(node->left);
        	cout<<node->key<<" "<<node->meaning<<"\n";
        	Display(node->right);
    	}
}
void AVL::Insert(node* t)
{
    	//special case:empty tree
    	if(!this->root)
    	{
    		root=t; 
    		return;
    	}
    	//Phase 1:Locate insertion point for e.
    	node* a=root;
    	node* pa=NULL;
    	node* p=root;
    	node* pp=NULL;
    	
    	while(p)
    	{
        	//cout<<"p->bf="<<p->bf;
        	if(p->bf==1||p->bf==-1)
        	{  //cout<<"\nEnter in if(p->bf)"<<endl;
            		a=p;pa=pp;
           	// cout<<"after entring a= "<<a->key<<endl;
           	//if(pa!=NULL)
            	//{cout<<"In while(p),pa="<<pa->key<<endl;}
        	}
        	
        	if(p->key.compare(t->key)>0)
        	{
        		pp=p;p=p->left;
        	}//take left branch
        	else if(p->key.compare(t->key)<0)
        	{
        		pp=p;p=p->right;
        	} //take right branch
        	else if(p->key.compare(t->key)==0)
        	{
        		cout<<"\nKey already exist in tree\n";return;
        	}
        }//end of while
   	// if(pa!=NULL) cout<<"@ pa="<<pa->key;
   	//cout<<"\nDecided position for insertion"<<endl;
    	//Phase2:Insert and re-balance,k is not in the tree may be inserted as appropriate child of pp
    	
    	node* y=t;
    	
    	if(pp->key.compare(t->key)>0)
        	pp->left=y;
    	else if(pp->key.compare(t->key)<0)
        	pp->right=y;

    	//cout<<y->key<<" means "<<y->meaning<<endl;

     	//Adjust balance factor of all nodes on path a to pp.By the definition of a,all nodes on this path
     	//presently have balance factor 0.their new balance factor will be +/-1.
     
     	int d;
     	node* b,*c; //b child of a //c child of b
     
     	if(y->key.compare(a->key)>0)
     	{
     		b=p=a->right;d=-1;
     	}
     	else
     	{
     		b=p=a->left;d=1;
     	}
     	while(p!=y)
     	{
		if(y->key.compare(p->key)>0)
         	{
         		p->bf=-1;p=p->right;
         	}
         	else
         	{
         		p->bf=1;p=p->left;
         	}
     	}

     	//Is tree unbalanced?
     	if(!(a->bf)||!(a->bf+d))
     	{
     		a->bf+=d;return;
     	}

     	//tree unbalanced ,determine rotation type
     	//cout<<"tree unbalanced ,determine rotation type"<<endl;
	if(d==1)
     	{
        	//left imbalance
         	if(b->bf==1)
         	{/*rotation type LL*/
			a->left=b->right;
           		b->right=a;a->bf=0;b->bf=0;
            		//cout<<"After LL rotation now structure is:"<<endl;
            		//cout<<b->key<<" at left of it "<<b->left->key<< " and at right "<<b->right->key<<endl;
         	}
         	else
         	{
            		//rotation type LR
            		c=b->right;
            		b->right=c->left;
           		a->left=c->right;
            		c->left=b;
            		c->right=a;
            		
            		switch(c->bf)
            		{
				case 1:
				{
					a->bf=-1;b->bf=0;break;
				}
			    	case -1:
				{
					b->bf=1;a->bf=0;break;
				}
			    	case 0:
				{
					b->bf=0;a->bf=0;break;
				}
			}
			
			c->bf=0;b=c;
			//cout<<"After LR rotation now structure is:"<<endl;
			//cout<<c->key<<"nat left of it "<<c->left->key<< "nand at right "<<c->right->key<<endl;
		}//end of LR
	}//end of left imbalance
     	else
     	{ //right imbalance
        	if(d==-1)
        	{//RR rotation
			a->right=b->left;
			b->left=a;
			a->bf=b->bf=0;
            		//cout<<"After RR rotation now structure is:"<<endl;
            		//cout<<b->key<<" at left of it "<<b->left->key<< " and at right "<<b->right->key<<endl;
         	}
         	else
         	{	 //RL rotation
           		c=b->left;
          		b->left=c->right;
          		a->right=c->left;
          		c->right=b;
          		c->left=a;
          		
          		switch(c->bf)
          		{
          			case 0:
            			{
            				a->bf=c->bf=0;break;
            			}
          			case -1:
            			{
            				a->bf=1;b->bf=0;break;
            			}
          			case 1:
            			{
            				a->bf=0;b->bf=-1;break;
            			}
          		}
        		
        		c->bf=0;b=c;
        		//cout<<"After RL rotation now structure is:"<<endl;
            		//cout<<c->key<<"at left of it "<<c->left->key<< "and at right"<<c->right->key<<endl;
        	}//end of RL
	}//end of right imbalance
   	
   	if(pa==NULL)
   	{
   		root=b;
   	}//cout<<"rooted at b"<<endl;
	else if(a==pa->left)
		pa->left=b;
   	else
   		pa->right=b;
   	
   	return;
}
int main()
{
	AVL a;
    	char ch;
    	int n;
    	
    	do
   	{
		cout<<"\n========================\n";
		cout<<"1.Add key\n";
		cout<<"2.Search key\n";
		cout<<"3.print in ascending order\n";
		cout<<"4.print in descending order\n";
		cout<<"5.Delete word\n";
		cout<<"6.Display dictionary\n";
		cin>>n;
		
		switch(n)
		{
        		case 1:
			{
			      	node* temp=a.getData();
			      	a.Insert(temp);
			      	break;
			}
			case 2:
			{
				string s;
				cout<<"\nEnter key to be serached\n";
				cin>>s;
				a.search(s);break;
			}
			case 3:
			{
				a.ascending(a.ret_root(a));break;
			}
			case 4:
			{
				a.descending(a.ret_root(a));break;
			}
			case 6:
			{
				a.Display(a.ret_root(a));
			}
		}
     	cout<<"\nDo you want to continue?\n";
     	cin>>ch;
    }while(ch=='y'||ch=='Y');
    
    return 0;
}
