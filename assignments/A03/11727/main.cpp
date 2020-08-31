/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  11727
Title:  11727 - Cost Cutting
Course: 4883
Semester: Fall 2020

Description:  this program determines which salry survives by finding the middle number between the 3 given numbers
*/
#include <iostream>

using namespace std;
int main() {
  int k,l,m,r,mid;
  cin >> k;
  for(int i = 0; i<k; i++)
  {
    cout<<"Case "<<i+1<<": " ;
    cin>>l>>m>>r;
    mid = l;
    if (l>=m & l<=r || l>=r & l<=m)
    {
      cout<<l<<endl;
    }
    else if (m>=l & m<=r || m>=r & m<=l)
    {
      cout<<m<<endl;
    }
    else cout<<r<<endl;
  }
}
