#include<bits/stdc++.h>
using namespace std;


//input=4 9
  //1 2 3 4

//output=1

int main()
{      
    int n,k;
    cin>>n>>k;
    std::vector<int> v;
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    bool ans=false;
    for(int i=0;i<n;++i)
    {
        int lo=i+1,hi=n-1;
        while(lo<hi)
        {
            int curr=v[i]+v[lo]+v[hi];
            if(curr==k)
            {
                ans=true;
            }
            if(curr<k)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }
    if(ans==true)
    {
        cout<<'1';
    }
    else
    {
        cout<<'0';
    }

}



