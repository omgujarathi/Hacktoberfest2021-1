#include <bits/stdc++.h>
using namespace std;

int iPartition(int arr[], int l, int h)
{   
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void qSort(int arr[],int l,int h){
    if(l<h){
        int p=iPartition(arr,l,h);
        qSort(arr,l,p-1);
        qSort(arr,p+1,h);
    }
}
 
int main() {
	int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
	qSort(arr,0,n-1);
	
	for(int x: arr)
	    cout<<x<<" ";
}
