/* Name: Harsh Singh
   Roll no: 1262
   Unit:4
   Program: Priority queue
   
*/
#include<iostream>
#include<conio.h>

using namespace std;

/* 1.Node Template*/
class PQNode
{
	public:
		int data;
		int priority;
		PQnode *next;
		
};
/*Queue template*/
class PQueue{
	PQNode *front;
	public:
		PQueue(){
			front=null;
			
		}
		void Enqueue(int x);
		void Dequeue();
		void PeekFront();
		void PeekRear();
		void Display();
		int Empty();
};
/* Menu */
int main()
{
	PQNode d;
	int num,ch;
	
	while(1)
	{
		system("cls");
		
		cout<<"------------Double Ended Queue------------"<<endl;
		
		cout<<"1. Enqueue \n";
		cout<<"2. Dequeue \n";
		cout<<"3. Peek in front\n";
		cout<<"4. Peek in rear\n";
		cout<<"5.Display\n";
		cout<<"6.Exit\n";
		
		cout<<"Enter your choice: \n";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"Enter element to enqueue: ";
				cin>>num;
				d.EnqueueFront(num);
				getch();
				break;
				
			
				
			case 2:
				d.Dequeue();
				getch();
				break;
				
			
				
			case 3:
				d.PeekFront();
				getch();
				break;
				
			case 4:
				d.PeekRear();
				getch();
				break;
				
			case 5:
				d.Display();
				getch();
				break;
				
			case 6:
				exit(1);
				
			
		}//end of switch
		
	}//end of while
}//end of main
