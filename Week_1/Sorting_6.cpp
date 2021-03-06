#include<bits/stdc++.h>
using namespace std;
void down(int heap[],int i);
void create(int heap[])
{
	int i,n;
	n=heap[0]; 
	for(i=n/2;i>=1;i--)
		down(heap,i);
}
void down(int heap[],int i)
{
	int j,temp,n,flag=1;
	n=heap[0];
	
	while(2*i<=n && flag==1)
	{
		j=2*i;	
		if(j+1<=n && heap[j+1] > heap[j])
			j=j+1;
		if(heap[i] > heap[j])
			flag=0;
		else
		{
			temp=heap[i];
			heap[i]=heap[j];
			heap[j]=temp;
			i=j;
		}
	}
}
int main(){
	int heap[50],n;
	cin>>n;
	cout<<"nums : ";
	for(int i=1;i<=n;i++)
	   cin>>heap[i];
	heap[0]=n;
	create(heap);
	while(heap[0] > 1)
	{
		int last=heap[0];
		int temp=heap[1];
		heap[1]=heap[last];
		heap[last]=temp;
		heap[0]--;
		down(heap,1);
	}
	cout<<"\n";
	for(int i=1;i<=n;i++)
	  cout<<heap[i]<<"  ";
}
