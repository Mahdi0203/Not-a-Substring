#include<bits/stdc++.h>
using namespace std;
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define srt(a) sort(a.begin(),a.end())
#define srta(a,sz) sort(a, a+sz)
#define rsrt(a) sort(a.rbegin(),a.rend())
#define pb(b) push_back(b)
#define rvrs(a) reverse(a.begin(),a.end())
#define TC ll t; cin>>t; while(t--)
#define tc int t; cin>>t; while(t--)
#define endl "\n"
#define yes "YES"
#define no "NO"
#define ff first
#define ss second
#define input(a,sz) for(int i=0; i<sz; i++) cin>>a[i];
#define output(a,sz) for(int i=0; i<sz; i++) cout<<a[i]<<" ";

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    if( n==2 && s=="()")
    {
        cout<<no<<endl;
    }
    else
    {
        string s1;
        for(int i=0; i<n; i++)
        {
            s1 += '(';
        }
        for(int i=0; i<n; i++)
        {
            s1 +=')';
        }
        //cout<<s1<<endl;
        vector<string> v;
        for(int i=0; i<=n; i++)
        {
            string s2;
            int a = i;
            for(int j=0; j<n; j++)
            {
                s2 += s1[a];
                a++;
            }
            //cout<<s2<<endl;
            v.pb(s2);
        }
        //for(auto x:v) cout<<x<<" ";
        //cout<<endl;
        if( count(v.begin(), v.end(), s) > 0)
        {
            //cout<<yes<<endl;
            string SS;
            for(int i=0; i<n*2; i++)
            {
                if(i % 2 == 0) SS += '(';
                else
                {
                    SS += ')';
                }
            }
            vector<string> v1;
            for(int i=0; i<n; i++)
            {
                string s2;
                int a = i;
                for(int j=0; j<n; j++)
                {
                    s2 += SS[a];
                    a++;
                }
                //cout<<s2<<endl;
                v1.pb(s2);
            }
            if( count(v1.begin(),v1.end(),s) > 0)
            {
                cout<<no<<endl;
            }
            else
            {
                cout<<yes<<endl<<SS<<endl;
            }
        }
        else
        {
            cout<<yes<<endl;
            cout<<s1<<endl;
        }
    }
}
int main()
{
    Start

    tc
    {
        solve();
    }

}

