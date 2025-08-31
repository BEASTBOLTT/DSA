#include <iostream>

using namespace std;

int main()

{

    int a,b,i,m=0;

    cin>>a>>b;

    int ar[100005];

    for(i=0; i<a; i++)

    {

        cin>>ar[i];

    }

    sort(ar,ar+a);

    for(i=0; i<a-1; i++)

    {

        if(ar[i+1]-ar[i]>m)

        {

            m=ar[i+1]-ar[i];

        }

    }

    double p,q,r,ans,ld;

    p=ar[0];

    q=(double)m/2;

    r=max(p,q);

    ld=b-ar[a-1];

    ans=max(r,ld);

    cout<<fixed<<setprecision(10)<<ans<<endl;



}