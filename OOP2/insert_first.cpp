#include<bits/stdc++.h>
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

void insert_first(Node* &head,int val)
{

    Node* newNode = new Node(val);

    if(head == NULL)
    {

        cout<<"The set is empty"<<endl;
        return;

    }else
    {

        newNode->next = head;
        head = newNode;

    }


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
        }else{

            insert_last1(head,tail,val);

        }


    }

    cout<<endl;
    cout<<" 1 -> for insert first"<<endl;
    int ch;
    cin>>ch;

    if(ch == 1)
    {
        int vall;
        cout<<"Enter any value for insert first : ";
        cin>>vall;
        insert_first(head,vall);
    }

    print_value(head);

}
