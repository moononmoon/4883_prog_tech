
/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  11498
Title:  11498 - Division of Nlogonia
Course: 4883
Semester: Fall 2020

Description:  this program determines what direction a certain point is at given the main point
*/
#include <iostream>

using namespace std;
int main() {
  int k,n,m,x,y;
  cin >> k;
  while (k != 0)
  {
  cin >> n >> m;
  for(int i = 0; i<k; i++)
  {
    cin >> x >> y;
    if(x < n & y < m)
    {
      cout << "SO" <<endl;
    }
    else if(x > n & y > m)
    {
      cout << "NE" <<endl;
    }
    else if(x < n & y > m)
    {
      cout << "NO" <<endl;
    }
    else if(x > n & y < m)
    {
      cout << "SE" <<endl;
    }
    else
    {
      cout << "divisa\n";
    }
  }
  cin >> k;
  }
}
