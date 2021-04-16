#include <bits/stdc++.h>
using namespace std;
void RearrangePosNeg(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        if (key > 0) continue;
        j = i - 1;
        while (j >= 0 && arr[j] > 0) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	  cin>>arr[i];
    RearrangePosNeg(arr, n);
    cout<<"\nArranged Array : \n";
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
    return 0;
}
