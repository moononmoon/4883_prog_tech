/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  11172
Title:  11172 - Relational Operator
Course: 4883
Semester: Fall 2020

Description:  this program determines whether a number is greater than, less than or equal to the other number
*/
#include <iostream>

using namespace std;
int main() {
  int k,n,m;
  cin >> k;
  for(int i = 0; i<k; i++)
  {
    cin>>n>>m;
    if(n>m){
      cout<<">"<<endl;
    }
    else if (n < m){
      cout<<"<"<<endl;
    }
    else{
      cout<<"=\n";
    }
  }
}
