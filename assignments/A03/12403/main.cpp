/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  12403
Title:  12403 - Save Setu
Course: 4883
Semester: Fall 2020

Description:  this program adds all the money that is being donated and desplays the total amount when asked to report
*/
#include <iostream>

using namespace std;
int main() {
  int k,l;
  int total = 0;
  string don;
  cin >> k;
  for(int i = 0; i<k; i++)
  {
    cin>>don;
    if (don=="donate")
    {
      cin>>l;
      total +=l;
    }
    else cout<<total<<endl;
  }
}
