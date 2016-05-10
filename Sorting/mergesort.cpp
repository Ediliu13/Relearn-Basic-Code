#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int m,int r){
	//size of left part and right part
	int sl=m-l+1;
	int sr=r-m;
	//array for left and right
	int L[sl],R[sr];
	//init the left and right from arr
	for(int i=0;i<sl;i++)L[i]=arr[l+i];
	for(int i=0;i<sr;i++)R[i]=arr[m+1+i];
	int i=0,j=0,k=l;
	//merging...	
	while(i<sl&&j<sr){
		if(L[i]<R[j])	arr[k++]=L[i++];
		else 			arr[k++]=R[j++];
	}
	while(i<sl)arr[k++]=L[i++];
	while(j<sr)arr[k++]=R[j++];
}
void mergesort(int arr[],int l,int r){
	//base case
	if(l==r)return;
	int mid=(l+r)/2;
	//mergesort the left part
	mergesort(arr,l,mid);
	//mergesort the right part
	mergesort(arr,mid+1,r);
	//merge it...
	merge(arr,l,mid,r);
}
int main(){
	int arr[]={7,2,234,12,123,253,42,3};
	int sz=sizeof(arr)/sizeof(arr[0]);
	mergesort(arr,0,sz-1);
	for(int i=0;i<sz;i++)printf("%d ",arr[i]);
}



