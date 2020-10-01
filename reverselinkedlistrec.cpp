#include <iostream> 
using namespace std; 
struct Node { 
    int data; 
    struct Node* next; 
    Node(int data) 
    { 
        this->data = data; 
        next = NULL; 
    } 
}; 
struct LinkedList { 
    Node* head, *last; 
    LinkedList() 
    { 
        head = NULL; 
        last = NULL;
    }
    Node* reverse(Node* node) 
    { 
    	if(node==NULL)
    		return NULL;
    	else
    	{
    		this->reverse(node->next);
    		cout<<node->data<<" ";
		}
		
    } 
    void print() 
    { 
        struct Node* temp = head; 
        while (temp != NULL) { 
            cout << temp->data << " "; 
            temp = temp->next; 
        }
        
    } 
    void insert(int data) 
    { 
    	if(head==NULL)
    		last=head=new Node(data);
    	else
    	{
    		last->next=new Node(data);
    		last=last->next;
		} 
    } 
}; 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LinkedList ll;
		int n,data;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>data;
			ll.insert(data);
		}
		ll.reverse(ll.head);
		cout<<endl;
	}
}
