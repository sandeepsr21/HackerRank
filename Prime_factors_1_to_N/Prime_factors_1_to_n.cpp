#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int *p=new int[16];
    int i=2,c,j=0;
    while(j<16)
    {
      
        for(c=2;c<=i-1;c++)
        {
            if(i%c==0)
                break;
        }
        if(i==c)
        {
            p[j++]=i;
           // cout<<p[j-1]<<endl;
        }
        i++;
    }
    
    int t;
    cin>>t;
    while(t--)
    {
        long int num;
        cin>>num;
        int count=0;
        if(num==1)
            cout<<"0"<<endl;
        else
        {
            long int x=1;
            j=0;
            while(x<=num && j<16)
            {
                x=x*p[j];
                j++;
            }
            cout<<j-1<<endl;
        }
    }
    return 0;
}