#include <iostream>
#include<vector>
using namespace std;

int main()
{
   // cout << "Hello World!" << endl;
   int t;
   cin>>t;
   while(t--)
   {
   	vector<long int> list;
   	long int n,m;
   	cin>>n>>m;
   	
   	while(m>1)
   	{
   		long int tmp=1,prev=tmp;
   		int i=0;
	   	while(true)
	   	{
	   		prev=tmp;
	   		tmp=tmp<<1;
	   		if(tmp>m)
	   		{
	   			break;
	   		}
	   		else
	   		{
	   			
	   			i++;
	   		}
	   	}
	   	list.push_back(i);
	   	m=m-prev;
   	}
   	
   	if(m==1)
   	{
   		list.push_back(0);
   	}
	for(int j=0;j<list.size();j++)
	{
	   	cout<<"("<<n<<"<<"<<list[j]<<")";
	   	if((j+1)<list.size())
	   		cout<<" "<<"+ ";
	   	
   	}
   	cout<<endl;
   }
    return 0;
}
