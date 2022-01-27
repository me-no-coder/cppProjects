#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

struct node
{
    string name, number;
    node *next;
};

node* head=NULL, *newNode, *temp;

int length()
{
    temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    temp=head;
    return count;
}

void C_node()
{
    newNode=new node;
    cout<<"Enter Name: \n";
    cin>>newNode->name;
    cout<<"Enter number: \n";
    cin>>newNode->number;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        temp=newNode;
    }
    else
    {
        temp->next=newNode;
        temp=newNode;
    }
}

void display()
{
    int length=0;
    node* trav=head;
    if(head==NULL)
    {
        cout<<"Contact list is Empty "<<endl;
    }
    else
    {
        cout<<"------------------------------------------"<<endl;
        while(trav!=NULL)
        {
            cout<<trav->name<<"\t"<<trav->number<<endl;
            trav=trav->next;
            length++;
        }
        cout<<"Total numbers in the Phone directory are: "<<length<<endl;
        cout<<"------------------------------------------"<<endl;
    }
}

void search_contact()
{
    node *search_node=head;
    string srch;
    //int count=0;
    cout<<"Enter contact/contact name to be searched: \n";
    cin>>srch;
    bool found=false;
    if(head==NULL)
    {
        cout<<"\nList is empty "<<endl;
    }
    else
    {
        cout<<"------------------------------------------"<<endl;
        while(search_node!=NULL)
        {
            if(srch==search_node->name || srch==search_node->number)
            {
                cout<<"\nDetails found: \n"<<search_node->name<<"\t"<<search_node->number<<endl;
                found=true;
            }
            search_node=search_node->next;
        }
        if(!found)
        {
            cout<<"\nNo record found"<<endl;
        }
        cout<<"------------------------------------------"<<endl;
    }
}

void at_given()
{
    int pos;
    node* trav=head;
    node *next_node;
    cout<<"\nEnter the position where you want to delete contact: "<<endl;
    cin>>pos;
    if(head==NULL)
    {
        cout<<"\nList is empty"<<endl;
    }
    else if(pos>length())
    {
        cout<<"\nPosition input invalid"<<endl;
    }
    else
    {
        if(pos==1)
        {
            head=head->next;
            delete trav;
            cout<<"\nContact deleted! "<<endl;
        }
        else
        {
            for(int i=1; i<pos; i++)
            {
                trav=trav->next;
            }
            next_node=trav->next;
            trav->next=next_node->next;
            delete next_node;
            cout<<"\nContact deleted! "<<endl;
            //trav=head;
        }
    }
}

void delete_list()
{
    if(head==NULL)
    {
        cout<<"\nList already empty"<<endl;
    }
    else
    {
        while(head!=NULL)
        {
            temp=head;
            head=head->next;
            delete temp;
        }
        cout<<"Entire contact list deleted "<<endl;
    }
}

void menu()
{
    cout<<"\nEnter 1 to add contact:               |"<<endl;
    cout<<"Enter 2 to display all contacts:      |"<<endl;
    cout<<"Enter 3 to search for a contact/name: |"<<endl;
    cout<<"Enter 4 to delete a contact           |"<<endl;
    cout<<"Enter 5 to delete entire list         |\n"<<endl;
}

int main()
{
    int op;
    while(true)
    {

        menu();
        cin>>op;
        switch(op)
        {

            case 1:
                C_node();
                break;
            case 2:
                display();
                break;
            case 3:
                search_contact();
                break;
            case 4:
                at_given();
                break;
            case 5:
                delete_list();
                break;
            default:
                cout<<"Invalid option "<<endl;
                break;
        }
    }
}
