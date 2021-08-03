/*
Niave approach is ek traversal me check karo

TC = O(N)
SC = O(1)

using binary search iterative

TC = O(log N)
SC = O(1)

*/



#include<bits/stdc++.h>
   
using namespace std;


int first(int a[],int n,int x)
{
	int first=INT_MAX;
	
	int l=0;
	int r=n-1;
	int mid;
	
	while(l<=r)
	{
		mid=l+(r-l)/2;
		
		if(a[mid]==x) //left me sarrkho to get first occurrence
		{
			first=mid;
			r=mid-1;
		}
		else if(a[mid]<x)
		{
			l=mid+1;
		}
		else if(a[mid]>x)
		{
			r=mid-1;
		}
	}
	
return first;
}

int last(int a[],int n,int x)
{
	int last=INT_MAX;
	
	int l=0;
	int r=n-1;
	int mid;
	
	while(l<=r)
	{
		mid=l+(r-l)/2;
		
		if(a[mid]==x) //right me sarrkho to get last occurrence
		{
			last=mid;
			l=mid+1;
		}
		else if(a[mid]<x)
		{
			l=mid+1;
		}
		else if(a[mid]>x)
		{
			r=mid-1;
		}
	}
	
return last;
}

int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
    int x = 2;
    cout<<"\nFirst ocuurrence is at index => "<<first(arr, n, x);
    cout<<"\nLast ocuurrence is at index => "<<last(arr,n,x);
    
	
	
return 0;
}
