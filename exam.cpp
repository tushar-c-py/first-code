#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#define ll long long
#define pb push_back
#define pob pop_back
#define mp make_pair 
#define lb lower_bound
#define ub upper_bound
#define nn "\n"
#define loop(i,n) for(i=0;i<n;i++)                               
#define loop1(i,n) for(i=1;i<=n;i++)
#define Loop(i,n,x) for(i=0;i<n;i+=x)
#define Loop1(i,n,x) for(i=1;i<=n;i+=x)
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define mem(name,val) memset(name,val,sizeof(name))
#define precise cout<<fixed<<setprecision(15)
const long long  MOD=(ll)1000000007;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); 
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/ 
    int t;
    cin>>t;
    int a[300001];
    a[0]=0;
    for(int i=1;i<=300000;i++)a[i]=a[i-1]^i;
    while(t--)
    {
        string s;
        cin>>s;
        string a="0",b="0";
        for(int i=0;i<s.size();i+=2)a+=s[i];
        for(int i=1;i<s.size();i+=2)b+=s[i];
        int x=stoi(a);
        int y=stoi(b);
        if(x>1)x--;
        else x=1;
        if(y>1)y--;
        else y=1;
        cout<<(ll)x*y<<endl;

    }
    
    

}