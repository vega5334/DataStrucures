/******************************************************************************
 
 Online C++ Compiler.
 Code, Compile, Run and Debug C++ program online.
 Write your code in this editor and press "Run" button to compile and execute it.
 
 *******************************************************************************/

#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
    private:
    node *head,*tail;
    public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    
    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;
        
        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    
    node* gethead()
    {
        return head;
    }
    
    void display()
    {
        node* temp;
        temp=head;
        while( temp!=NULL)
        {
            cout<< temp->data<<endl;
            temp=temp->next;
        }
    }
    
    
    void front(int n)
    {
        node *tmp = new node;
        tmp -> data = n;
        tmp -> next = head;
        head = tmp;
    }
    
    void insertNth(int pos, int n)
    {
        node *temp=new node;
        temp->data=n;
        temp->next=NULL;
        
        if( head== NULL)
        {
            head=temp;
        }
        else if( pos==1)
        {
            temp->next=head;
            head=temp;
        }
        else
        {
            int d=1;
            node* temp2;
            temp2=head->next;
            while( d!=pos)
            {
                temp2=temp2->next;
                d++;
            }
            temp->next=temp2->next;
            temp2->next=temp;
            
        }
        
    }
    
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.front(3);
    a.front(4);
    a.insertNth(2,7);
    a.display();
    return 0;
}
