/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  727
Title:  727 - Equation
Course: 4883
Semester: Fall 2020
Description:  this program changes an infix expression to a postfix expression
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
  int n,t;
  string ch;
  cin>>n;
 
  getline(cin, ch);
  for(int i =0;i<n;i++)
  {
    getline(cin, ch);
    if(i==0)
    getline(cin, ch);
    stack<string>stck;
    while(ch.length()!= 0)
    {
      if(ch == "+" || ch == "-" || ch == "*" || ch == "/" || ch == "(")
      {
        if(!stck.empty()&&(stck.top()=="+" || stck.top()=="-") &&(ch =="+" || ch =="-"))
        {
          cout<< stck.top();
          stck.pop();
          stck.push(ch);
        }
        else if(!stck.empty()&&(stck.top()=="*" || stck.top()=="/") &&(ch =="*" || ch =="/"))
        {
          cout<< stck.top();
          stck.pop();
          stck.push(ch);
        }
        else if (!stck.empty()&&(stck.top()=="*" || stck.top()=="/") &&(ch =="+" || ch =="-"))
        {
          while (!stck.empty() && stck.top() != "(")
          {
          cout<<stck.top();
          stck.pop();
          }
          stck.push(ch);
        }
        else stck.push(ch);
      }
      else if (ch == ")")
      {
        while(stck.top() != "(")
        {//print and pop everything from the stack untill you get to "("
          cout<<stck.top();
          stck.pop();
        }
        stck.pop();
      }
      else cout<<ch;  //prints out the numbers
      getline(cin, ch);
    }
    while(!stck.empty())
    {
      cout<<stck.top();
      stck.pop();
    }
    cout<<endl<<endl;
  }
  cout<<endl;
  return 0;
}
