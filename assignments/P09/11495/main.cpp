/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  11495
Title:  11495: Bubbles and Buckets
Course: 4883
Semester: Fall 2020
Description:  this program will show a copy of the puzzle on the screen step by step, as the disks move around
*/
#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
int main()
{
    int n, m, count;
    while (cin>>n && n != 0)
    {
      vector<int>vec;
      count = 0;
      for(int i =0;i<n;i++)//store the input in a vector
      {
        cin>>m;
        vec.push_back(m);
      }
      //do a bubble sort on the list
      for (int i = 0; i < vec.size()-1; i++)      
      {
          for (int j = 0; j < vec.size()-i-1; j++)  
            {
              if (vec[j] > vec[j+1])  
                {
                  swap(&vec[j], &vec[j+1]);//call the swap function
                  count++;
                }
            }
      }
    if(count % 2 == 0)//print the name of the winner
      cout<<"Carlos"<<endl;
    else cout<<"Marcelo"<<endl;
    }
    return 0;
}
