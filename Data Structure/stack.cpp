#include<bits/stdc++.h>
using namespace std;

template<class T> class Stack{
	private:
		class Node{
			public:
			T val;
			Node *next;
			Node(T x){
				val=x;
				next=NULL;
			}
		}*top;
	public:
		Stack(){
			top=NULL;
		}
		bool push(T x){
			Node *newNode=new Node(x);
			if(top!=NULL)newNode->next=top;
			top=newNode;
			return 1;
		}
		bool pop(){
			if(top){
				Node *mark=top;
				top=top->next;
				delete mark;
				return 1;
			}
			else return 0;
		}
		bool isEmpty(){
			return !top;
		}
		void print(){
			if(isEmpty())return;
			Node *curr=top;
			while(curr){
				cout<<curr->val<<" ";
				curr=curr->next;
			}
			cout<<endl;
		}
};
int main(){
	Stack<int> stk;
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.print();
}



