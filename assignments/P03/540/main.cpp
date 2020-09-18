/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  540
Title:  540 - Team Queue
Course: 4883
Semester: Fall 2020
Description:  in this program, For each test case, first print a line saying ‘Scenario #k’, where k is the number of the test case. Then, for each ‘DEQUEUE’ command, print the element which is dequeued on a single line. Print a blank line after each test case, even after the last one.
*/
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int row, num, numb, col, pted, 
    ptin, vsize ;
    int count = 1; 
    string str;
    int colom[] = { 5, 3, 4, 2, 1 }; 

    while (cin>>row && row != 0)
    {
      pted = row+5;
      cout<<"Scenario #"<<count<<endl;
      count += 1;
    vector<vector<int> > vec(row); //initialize vector of vectors
    vector<queue<int> > vecqu(row);//initialize vector of queues
    vector<int> pq(row); //initialize a vector
    vector<int> myvector;
  
    for (int i = 0; i < row; i++) { 
  
        cin>>col; 
        pq[i]=col;
  
        vec[i] = vector<int>(col);
        vecqu.push_back(queue<int>());//push queues into the vector 
        for (int j = 0; j < col; j++){
          cin>>num;
          vec[i][j] = num;//put num into the vectors of vectors 
        }
    } 
    while(cin>>str && str != "STOP")
    {
      if (str == "ENQUEUE")
      {
        cin>>num;
        if (pted < row && vecqu[pted].empty())
        {
          pted = row+ 5;
        }
        for(int k = 0; k<row; k++)
        {
          for (int sv = 0; sv<pq[k]; sv++)
          {
            if ( vec[k][sv] == num)//find the element's team and insert it in the right team
            {
              vecqu[k].push(num);
              myvector.push_back(num);//vector that holds all the elements in the oder that they came in
              int nk = k;
              int tv = sv;
              for (int ni = nk; ni<row; ni++)
              {
                k++;
              }
              for (int nj = tv; nj<pq[k]; nj++)
              {
                sv++;
              }
            }
          }
        }
        
      }
      else //DEQUEUE the elements
      {
        if (pted < row && !vecqu[pted].empty())
        {
          numb = vecqu[pted].front();
          cout<<vecqu[pted].front()<<endl;
          vecqu[pted].pop();////pop the element from its team
          for (int i=0; i<myvector.size(); ++i)
          {
            if (myvector[i] == numb)
              {
                myvector.erase (myvector.begin()+i);//erase the element from the whole group
                for(int j=i;j<myvector.size();++j)
                ++i;
              }
          }
        }
        else {
        for(int k = 0; k<row; k++)
        {
          if (!vecqu[k].empty() && vecqu[k].front() == myvector.front())
          {
            cout<<vecqu[k].front()<<endl;
            pted = k;
            vecqu[k].pop();//pop the element from its team
            myvector.erase (myvector.begin());//erase the element from the whole group
            for (int ni = k; ni<row; ni++)
              {
                k++;
              }
          }
        }
      }
      }
    }
    cout<<endl;
  } 
} 
