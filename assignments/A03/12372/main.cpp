/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  12372
Title:  12372 - Packing for Holiday
Course: 4883
Semester: Fall 2020

Description:  this program determines whether length, width and height can fit into a 20 by 20 by 20 rectangle
*/
#include <iostream>

using namespace std;
int main() {
  int k,l,w,h;
  cin >> k;
  for(int i = 0; i<k; i++)
  {
    cout<<"Case "<<i+1<<": " ;
    cin>>l>>w>>h;
    if(l<=20 & w<=20 & h<=20){
      cout<<"good"<<endl;
    }
    else{
      cout<<"bad"<<endl;
    }
  }
}
