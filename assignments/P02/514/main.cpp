/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  514
Title:  514 - Rails
Course: 4883
Semester: Fall 2020
Description:  this program reads a numbers from a file representing trains.
A line of the output file contains ‘Yes’ if it is possible to marshal the coaches in the order required on the corresponding line of the input file. Otherwise it contains ‘No’.
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
  int n,t;
  int p = 1;//
  while(cin>>n && n!=0)
  {
    while(cin>>t && t!=0)
    {
      stack<int>stk;//stack to hold output that matches
      stack<int>qstl;//stack that holds trains that are parked
      
      for(int i = 1; i<= n; i++)
      {
        if(i==t)
        {
          stk.push(i);
          if(p<n)
            cin>>t;
            p++;
          //while loop checks if parked train can be moved to the ready trains
          while(!qstl.empty() && qstl.top() == t){
          qstl.pop();
          if(p<n)
          cin>>t;
          p++;
          
          }
        }
        else
        {//if the trains dont match park them
          while(i<= n && i != t)
          {
            qstl.push(i);
            i++;
          }
          i--;
        }
        
      }
      if(p < n)//checks if i red all the correct numbers 
      {
        for(int j=p;j<n;j++)
        cin>>t;
      }
      p=1;
      if(!qstl.empty())
      cout<<"No"<<endl;
      else 
      {
        cout<<"Yes"<<endl;
      }
    }
    cout<<endl;
  }
  cout<<endl;
  return 0;
}
