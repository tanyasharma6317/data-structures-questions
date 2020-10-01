#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
};
void append(Node **headadd,int data)
{
    Node *temp,*newnode,*temp1;
    temp = *headadd;
    temp1 = *headadd;
    int flag = 1;
    while(temp1 != NULL)
    {
        if(temp1->data == data)
            flag = 0;
        temp1 = temp1->next;
    }
    if(flag == 1)
    {
        newnode = new Node();
        newnode->data = data;
        newnode->next = NULL;
        if(*headadd == NULL)
            *headadd = newnode;
        else
        {
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
}
void display(Node *head)
{
    if(head == NULL)
    {
        cout<< "List is empty";
        return;
    }
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    int data;
    do
    {
        cin>>data;
        if(data>0)
            append(&head,data);
    }while(data>0);
    display(head);
    return 0;
}