#include<bits/stdc++.h>
using namespace std;

int main() 
{
 int p;
 cin>>p;
 while(p--)
 {
    long  int n,k,f,m=0,t=0,l=0,i=0,j=0;
     cin>>n>>k;
     if(n>0)
     {
     string s; 
        cin>>s;
        t=k+1;
        // i for iron && j for magnet
        while(i<n && j<n)
        {
            if(s[i]=='M')
            { 
              if(s[j]=='I')
              {
            
               f=t-abs(i-j)-l;
               if(f>0)
               {
               m++;
               i++;
               j++;
               }
               else
               if(i>j)
               j++;
               else
               i++;
              }
              else if(s[j]=='X')
              {
              i=j;
              i++;
              j++;
              }
              else
              j++;
              
              }
              else if(s[i]=='X')
              {
              j=i;
              i++;
              j++;
              }
              else
              i++;
        }
        
      cout<<m<<endl;
     }
    }
}