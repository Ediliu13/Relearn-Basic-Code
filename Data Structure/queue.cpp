#include<bits/stdc++.h>
using namespace std;

//The question is why i code queue when there is C++ STL for queue
//because Relearn-Basic-code
//understand and code it first before using STL
template<class T> class Queue{
	private:
		class Node{
			public:
			T val;
			Node *next;
			Node(T x){
				val=x;
				next=NULL;
			}
		}*front,*rear;
		int sz;
	public:
		Queue(){
			sz=0;
			front=rear=NULL;
		}
		bool push(T x){
			Node *newNode=new Node(x);
			if(front==NULL){
				front=newNode;
			}
			else{
				rear->next=newNode;
			}
			rear=newNode;
			//success
			sz++;
			return 1;
		}
		bool pop(){
			if(front){
				sz--;
				Node *mark=front;
				front=front->next;
				delete mark;	
			}
			//unsuccessful pop queue
			else return 0;
		}
		bool isEmpty(){
			return !front;
		}
		int getSize(){
			return sz;
		}
		T getFront(){
			if(front)return front->val;
		}
		T getRear(){
			if(rear)return rear->val;
		}
		void print(){
			if(isEmpty())return;
			
			Node *curr=front;
			while(curr){
				cout<<curr->val<<" ";
				curr=curr->next;
			}
			cout<<endl;
		}
};
int main(){
	Queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	cout<<q.getFront()<<endl;
	cout<<q.getRear()<<endl;
}



