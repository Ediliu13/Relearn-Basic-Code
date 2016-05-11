#include<bits/stdc++.h>
using namespace std;

template<class T> class Stack{
	private:
		int sz;
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
			sz=0;
			top=NULL;
		}
		bool push(T x){
			sz++;
			Node *newNode=new Node(x);
			if(top!=NULL)newNode->next=top;
			top=newNode;
			return 1;
		}
		bool pop(){
			if(top){
				sz--;
				Node *mark=top;
				top=top->next;
				delete mark;
				return 1;
			}
			else return 0;
		}
		T getTop(){
			if(top)return top->val;
		}
		bool isEmpty(){
			return !top;
		}
		int size(){
			return sz;
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
	cout<<stk.getTop()<<endl;
	cout<<stk.size();
}



