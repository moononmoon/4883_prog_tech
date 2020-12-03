/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  10226
Title:  10226 - Hardwood Species
Course: 4883
Semester: Fall 2020
Description:  given a list of species, the program prints the 
name of each species represented in the population, in alphabetical 
order, followed by the percentage of the population it represents, 
to 4 decimal places.

*/ 
#include <bits/stdc++.h> 
using namespace std; 

int main()  
{  
  int x;
  string str;
  cin>>x;
  getline(cin, str);
  getline(cin, str);
  for(int j = 0;j < x; j++) {
    map <string, int> tMap;
    int count = 0;
    while (getline(cin, str))
    {
      if(str == "")
       {
         break;
       }
      tMap[str]++;
      count++;
    }
    //print the species with the collect percentage
    for(map<string, int>::iterator i = tMap.begin(); i != tMap.end(); i++){
            cout << i->first << " " << fixed << setprecision(4) << i->second*100.0/count << endl;
    }
      cout<<endl;
  }
    return 0;  
}
