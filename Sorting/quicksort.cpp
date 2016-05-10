#include<bits/stdc++.h>
using namespace std;

void quicksort(int arr[],int l,int r){
	int i=l,j=r;
	//pick pivot(middle)
	int piv=arr[(l+r)/2];
	//partitioning	
	while(i<=j){
		while(arr[i]<piv)i++;
		while(arr[j]>piv)j--;
		if(i<=j){
			swap(arr[i],arr[j]);i++,j--;
		}
	}
	//now the order must be l j i r
	//if l==j then ordered, no need to do quicksort again
	if(l<j)quicksort(arr,l,j);
	//if i==r then ordered, no need to do quicksort again
	if(i<r)quicksort(arr,i,r);
}
int main(){
	int arr[]={3,1,5,2,1,6,123,45};	
	int sz=sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,sz-1);
	for(int i=0;i<sz;i++)printf("%d ",arr[i]);
}

