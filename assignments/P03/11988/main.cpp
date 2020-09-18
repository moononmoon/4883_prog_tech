/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  11988
Title:  11988 - Broken Keyboard (a.k.a.          Beiju Text)
Course: 4883
Semester: Fall 2020
Description:  in this program, there are several test cases. Each test case is a single line 
containing at least one and at most 100,000 letters, underscores and two special characters 
‘[’ and ‘]’. ‘[’ means the “Home” key is pressed internally, and ‘]’ means the “End” key is pressed internally. 
The input is terminated by end-of-file (EOF).
*/
#include<bits/stdc++.h>


using namespace std;

int main() {
   string chr;
  int length;
  while(getline(cin,chr))
  {
  length=chr.length();

  stack<char>stk;
  for(int i = length; i >= 0; i--)
  {
    if(chr[i] == '[')
    {
      while(!stk.empty() && stk.top() != '[' && stk.top() != ']')
      {
        cout<<stk.top();
        stk.pop();
      }
    }
    stk.push(chr[i]);

  }
  while(!stk.empty())
      {
        if(stk.top() != '[' && stk.top() != ']')
        {
        cout<<stk.top();
        stk.pop();
        }
        else
        {
        stk.pop();
        }
      }
  cout<<endl;
  }  
}
