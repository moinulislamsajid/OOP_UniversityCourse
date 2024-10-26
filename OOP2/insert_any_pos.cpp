#include<bits.h/stdc++.h>
using namespace std;

class Node
{

public:

    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_last1(Node* &head,Node* &tail,int val)
{

    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;



}
void print_value(Node* head)
{

    Node* temp = head;

    while(temp != NULL)
    {

        cout<<temp->value<<" "<<endl;
        temp = temp->next;
    }
    cout<<endl;

}

void inser_any1(Node* head,int pos,int val)
{

    Node *newNode = new Node(val);
    Node *temp = head;

    for(int i = 1; i<=pos-1; i++)
    {
        temp = temp->next;

    }

    newNode->next = temp->next;
    temp->next = newNode;

}

int main()
{

    Node * head = NULL;
    Node * tail = NULL;

    int val;

    while(1)
    {

        cin>>val;

        if(val == -1)
        {
            break;
        }
        else
        {

            insert_last1(head,tail,val);

        }


    }


}


