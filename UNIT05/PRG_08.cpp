/*
Name: Harsh Singh
Roll no:1262
unit:5
Program:Singly Linked List
*/
#include<iostream>
#include<conio.h>
using namespace std;
/*Node Template*/
class Node{
	public:
		int data;
		Node *next;		
};
/*List Template*/
class List{
	Node *head;
	public:
		List()
		{
			head=NULL;
		}
		void Insert(int x);
		void Delete(int x);
		void Search(int x);
		void Display();
		void Length();
};
/*Functions**/
/****************************************************************/
void List :: Insert(int x){
	 //create a new node
	 Node *t=new Node();
	 t->data=x;
	 t->next=NULL;
	 
	 //First node in the list
	 if (head==NULL){
	 	head=t;
	 	return;
	 }
	 //traverse to the end of the list
	 Node *tmp=head;
	 Node *prev=NULL;
	 while(tmp != NULL){
	 	prev=tmp;
	 	tmp=tmp->next;
	 }
	 //Link new node t to the last node in the list
	 prev->next=t;
}//End of insert
/****************************************************************/

/*main menu*/
int main(){
	List s;
	int ch,num;
	
	while(1){
		system("cls");
		cout<<"***** Singly Linked List *****"<<endl<<endl;
		cout<<"1. Insert in the node"<<endl;
		cout<<"2. Delete a node "<<endl;
		cout<<"3. Search for a node "<<endl;
		cout<<"4. Display the List"<<endl;
		cout<<"5. Length of list"<<endl;
	
		cout<<"6. Exit\n\n"<<endl<<endl;
		
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter a number :";
				cin>>num;
				s.Insert(num);
				getch();
				break;
			case 2:
				cout<<"option 2";
				getch();
				break;
			
			case 3:
				cout<<"option 4";
				getch();
				break;
			case 4:
				cout<<"option 4";
				getch();
				break;
			case 5:
				cout<<"option 5";
				getch();
				break;
			case 6:
				exit(1);
			default:
				cout<<"Incorrect choice";
				getch();
				break;
		}//end of switch
	}//end of while
}//end of main