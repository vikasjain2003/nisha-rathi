#include<iostream>
using namespace std;

//function definition
int TwoWayLS(int a[],int n,int key) //Array as parameter, pass by reference  // n and key are pass by val
{
	int i=0,j=n-1;  //initialization
	
	while(i<=j)  //condition
	{
		if(key==a[i]) //comparison operator
		{      
		return i;
		}
		
		else if(key==a[j]) //comparison operator
		{
			
			return j;
		}
		i++; j--;	 //increment, decrement	
	}
	
	return -1;
	
	//for(int i=0,j=n-1; i<=j; i++, j--)
	
}
int main()
{
	//Size of array
	int n,key;
	cout<<"Enter size of array";
	cin>>n;
	
	//declaration of array
	int a[n];
	
	//fill the array
	cout<<"Enter elements of array";
	for(int i=0; i<n; i++) cin>>a[i];  //0 to n-1
	
	//Element to search
	cout<<"Enter the elements to search in array";
	cin>>key;
	
	//function calling
	int r=TwoWayLS(a,n,key); //actual parameters
	if(r==-1) cout<<"Element not found";
	else cout<<"Element found at position "<<r+1;
}
