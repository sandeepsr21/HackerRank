#include <iostream>
#include<algorithm>
using namespace std;

typedef struct _cont
{
	unsigned long long int a;
	int count;
}container;

bool comp(const container &c1,const container &c2)
{
	return c1.count < c2.count;
}
int main()
{
    //cout << "Hello World!" << endl;
    int t,n;
    unsigned long long int *a;
    cin>>t;

    for(int i=0;i<t;i++)
    {
    	cin>>n;
    	a = new unsigned long long int[n];
    	container *c = new _cont[n];
    	//cout<<endl;
    	for(int j=0;j<n;j++)
    	{
    		cin>>a[j];
    		c[j].a = a[j];
    		c[j].count = 0;
    	//	cout<<a[j]<<" ";
    	}
    	//sort(c,c+n,comp);
    	for(int k=0;k<n;k++)
    	{
	    	int reminder=0;
	    	unsigned long long int num = c[k].a;
	    	while(num!=0)
	    	{
	    		reminder = num%2;
	    		if(reminder == 1)
	    		{
	    			c[k].count++;
	    		}
	    		num=num/2;
	    	}
    	}
    	stable_sort(c,c+n,comp);
    	for(int m=0;m<n;m++)
    	{
    		cout<<c[m].a;
    		if(m<n-1)
    			cout<<" ";
    	}
    	cout<<endl;
    	delete[] a;
    	delete[] c;
    	
    }
    return 0;
}
