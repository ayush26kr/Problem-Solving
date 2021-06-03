#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
struct Node* head;
void Insertat_beg(int);
void Insertat_random(int,int);
void Insertat_end(int);
//void del_beg();
//void del_end();
//void del_random(int);
void search(int);
void display();
int main()
{
while(1)
{
	
    int choice,value,pos;
    cout<<"\n\n\t\t\t------------Main Menu--------- ";
    cout<<"\n\t\t\t1.Insert at Begining\n\t\t\t2.Insert at random\n\t\t\t3.Insert at end\n\t\t\t4.Delete from begining\n\t\t\t5.Delete random element\n\t\t\t6.Delete from end\n\t\t\t7.Search\n\t\t\t8.Display\n";
    cout<<"\t\t\t-------------------------------";
    cout<<"\n\n\t\tEnter choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1: 
        	 cout<<"Enter value to be inserted: ";
       		 cin>>value;
       		 Insertat_beg(value);
		
        break;
        case 2:
        cout<<"Enter value and position to be inseted: ";
        cout<<"\nValue : ";
		cin>>value;
		cout<<"Position : ";
		cin>>pos;
		Insertat_random(value,pos);
        break;
        case 3:
        cout<<"Enter value to be inserted : ";
        cin>>value;
        Insertat_end(value);
        break;
        /*case 4:del_beg();
        break;
        case 5:
		cout<<"Enter element to be deleted";
		cin>>value;
		del_random(value);
		break;
		case 6:del_end();
		break;*/
		case 7:
		cout<<"Enter the value to be searched : ";
		cin>>value;
		search(value);
		break;
        case 8:display();
        break;
        default:cout<<"Error: Please enter the Valid choice ";
    }
}}


void Insertat_beg(int value)
{
    Node* new_node=new Node();
    new_node->data=value;
    new_node->next=head;
    head=new_node;
    cout<<"Node Inserted successfully\n ";
}
void Insertat_random(int value,int pos)
{
	struct Node* trv=head;
	Node* new_node=new Node();
	for(int i=2;i<pos;i++)
	{
		trv=trv->next;
		if(trv==NULL)
		cout<<"Value can not be Inserted\n ";
	}
	new_node->data=value;
	new_node->next=trv->next;
	trv->next=new_node;
	cout<<"Value insertion at position " <<pos<<" SUCCESS \n\n";
	
}
void Insertat_end(int value)
{
	Node* temp=new Node();
	temp->data=value;
	if(head==NULL)
	{
		temp->next=head;
		head=temp;
		cout<<"Node inserted ";
	}
	else
	{
		struct Node* trv=head;
		while(trv->next!=NULL){
			trv=trv->next;
		}
		Node* new_node=new Node();
		new_node->data=value;
		trv->next=new_node;
		new_node->next=NULL;
		cout<<"Value inserted at end SUCCESS\n";
	}
	
}
	//Deletion
/*void del_beg()
{
	struct Node* tail=head;
	
	
	if(head==NULL)
	cout<<"Linked list is empty ";
	
	
}*/
//void del_end();
//void del_random(int);
//void search(int);
void search(int value)
{
	struct Node* trv=head;
	while(trv->next!=NULL)
	{
	
	if(trv->data==value)
	{
		cout<<"\n\t\t\t\tElement is in the linked list ";
		break;
	}
	else trv=trv->next;
	}
	
	if(trv->next==NULL)
	{
		if(trv->data==value)
		{
			cout<<"\n\t\t\t\tElement is in the linked list ";
		}
		else
		cout<<"\n\t\t\t\t\tElement is not inside the Linked List";
	}
}
void display()
{
    struct Node* trv;
    trv=head;
    if(trv==NULL)
    cout<<"\n\n\tNothing in the List to print ";
    else
    {
        cout<<"\t\t\t\t\tLinked List : ";
        while(trv!=NULL)
        {
            cout<<trv->data<<" ";
            trv=trv->next;
        }
        cout<<"\n\n";
    }
}