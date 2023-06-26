/**
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
/* header file */
#include<bits/stdc++.h>
#include<stack>
#include <queue>
#include <algorithm>
#include<iostream>
#include<string>
/* for faster cin cout */
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
/* sort function */
#define strsort() sort(s.begin(),s.end())
#define arrsort() int n1=sizeof(a)/sizeof(a[0]);sort(a,a+n1)
/* legth function */
#define strlen s.size()
#define arrlen int n1=sizeof(a)/sizeof(a[0])
#define intlen int n2=trunc(log10(n))+1
/* Conver function */
#define csti int csti=stoi(s)
/* Others Sortcut */
#define PI 3.1415926535897932384626433832795
#define nn "\n"
#define yes "YES"
#define no "NO"
#define case "Case "
#define elif else if
#define ll long long
#define lli long long int
#define pb push_back
/* testcase */
#define test() int t;cin>>t;while(t--)
#define testt() int t;cin>>t;for(int i=1; i<=t; i++)
#define f(i,n) for(int i = 0; i < n; i++)
using namespace std;
const ll mod = 1e9 + 7;
//const ll N = 2e5 + 10;
/*  let's started  */
void solved()
{
    int n;
    cin>>n;
    int x=n%10;
    if(n%2==0 && x!=9)
        cout<<n/2<<' '<<n/2<<nn;
    elif(x&1 && x!=9)
    cout<<n/2<<' '<<n-(n/2)<<nn;
    else
    {
        string s,s1,s2,s3;
        s=to_string(n);
        reverse(s.begin(),s.end());
        //cout<<s<<nn;
        int c=0,f=0,len=s.size();
        s[len]='0';
        for(int i=0; i<=s.size(); i++)
        {
            if(s[i]=='9'&&c==1&&f==0)
            {
                s1+='5';
                s2+='4';
                c=0;
            }
            elif(s[i]=='9'&&c==0&&f==0)
            {
                s1+='4';
                s2+='5';
                c=1;
            }
            else
            {
                s3+=s[i];
                f=1;
            }
        }
        reverse(s3.begin(),s3.end());
        int num=stoi(s3);
        int n1=num/2;
        int n2=num-n1;
        string str,str1;
        str+=to_string(n1);
        str1+=to_string(n2);
        str+=s1;
        str1+=s2;
        int num1=stoi(str);
        int num2=stoi(str1);
        cout<<num1<<' '<<num2<<nn;
    }

}

int main()
{
    fast();
    test()
    solved();
    return 0;
}
