#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[52];
void inilize()
{
	arr[0]=0;
	arr[1]=1;
	arr[2]=2;
	arr[3]=4;
	
	for(int i=4;i<52;i++)
	{
		arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
		
	}
}

main()
{
inilize();
cout<<"enter test cases";
int test;
cin>>test;
for(int i=0;i<test;i++)
{
	cout<<"enter the numer";
	int n;
	cin>>n;
	cout<<arr[n]<<endl;
	}	
}
