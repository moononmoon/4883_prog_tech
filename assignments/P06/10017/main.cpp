/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  10017
Title:  10017 - The Never Ending Towers of Hanoi
Course: 4883
Semester: Fall 2020
Description:  this program will show a copy of the puzzle on the screen step by step, as the disks move around
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>s[3];
int step, m;
void print()
{
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        if(i == 0)
          cout<<"A=>";
        else if(i == 1)
          cout<<"B=>";
        else cout<<"C=>";
        if (!s[i].empty())
        {
            cout<<"   ";
            for (int j = 0; j < s[i].size() - 1; j++)
                cout<<s[i][j]<<" ";
            cout<<s[i].back();
        }
        cout<<endl;
    }
}
//recursive function
void hanoiTower(int n, int from, int buffer, int to)
{
    if (step == m)
        return;

    if (n == 1)//move only one disc from "from" to "to"
    {
        step++;
        s[to].push_back(s[from].back());
        s[from].pop_back();
        print();
    }
    else
    {
        hanoiTower(n - 1, from, to, buffer);//move n-1 discs form "from" to "buffer"
        if (step == m)
            return;
        step++;
        //move n-th disc from "from" to "to"
        s[to].push_back(s[from].back());//push to new vector
        s[from].pop_back();//delete from old vector
        print();
        hanoiTower(n - 1, buffer, from, to);//move n-1 disc form "buffer" to "to"
    }
}
int main()
{
    int n, Case = 1;
    while (cin>>n>>m && n+m != 0)
    {
        cout<<"Problem #"<<Case++<<endl;
        step = 0;
        for (int i = n; i; i--)
            s[0].push_back(i);

        print();
        hanoiTower(n, 0, 1, 2);//call recursive function
        for (int i = 0; i < 3; i++)
            s[i].clear();
        cout<<endl;
    }
    return 0;
}
