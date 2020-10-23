/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  920
Title:  920 - Sunny Mountains
Course: 4883
Semester: Fall 2020
Description:  in this program, Given the points representing the height of the mounts calculate the total length in meters of the bold lines 
*/
#include<bits/stdc++.h>

using namespace std;

struct Point { 
  int x, y; 
  };

bool PCO(const Point &a, const Point &b)
{
    return b.x < a.x;
}

int main()
{    
    int C;
    cin >> C;
    while ( C-- )
    {
        int N;
        cin >> N;
        vector<Point> P;
        for (int i = 1; i <= N; ++i) //fill the vector of points with points
        {
            Point point;
            cin >> point.x >> point.y;
            P.push_back(point);
        }

        // Sort the points in x-cordinate from biggest to smallest.
        sort(P.begin(), P.end(), PCO);

        int YMax = 0; //the highest y-cordinate or height
        double length = 0;
        for (int i = 1; i < N; ++i)
        {
            if (P[i].y > YMax)  //find the length and change the new highest 
            {
                length += (sqrt((double)(pow((P[i].x - P[i-1].x), 2) 
                      + pow((P[i].y - P[i-1].y), 2))))
                          * (P[i].y - YMax) / (P[i].y - P[i - 1].y); 
                YMax = P[i].y;
            }
        }

        cout << fixed << setprecision(2)
             << length << endl;
    }
    return 0;
}
