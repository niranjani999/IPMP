#include<bits/stdc++.h>
using namespace std;
int main(){
	int nums[50],n;
	cin>>n;
	cout<<"nums : ";
	for(int i=0;i<n;i++)
	   cin>>nums[i];
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1 ; j<n ; j++)
		{
			if(nums[j] < nums[min])
			{
				min=j;
			}
		}
		int temp=nums[i];
		nums[i]=nums[min];
		nums[min]=temp;		
	}
	cout<<"\n";
	for(int i=0;i<n;i++)
	  cout<<nums[i]<<"  ";
}
