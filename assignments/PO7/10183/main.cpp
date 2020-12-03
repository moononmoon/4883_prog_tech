/*
Author: Mark Tachiri
Email:  marktachiri@ymail.com
Label:  10183
Title:  10183 - How Many Fibs?
Course: 4883
Semester: Fall 2020
Description:  Given two numbers a and b, calculate how many Fibonacci numbers are in the range [a, b].
*/
#include<bits/stdc++.h>
#include<cmath>
#include <vector>
using namespace std; 

int main() {
  
  vector<double>vec;
  double maxc = pow(10, 100);
  double n;
  double fn;
  int count, i;
  double num = 1; 
  double num1 = 1;
  double num2 = 1;
  while(num <= maxc){
    vec.push_back(num);//push the first number to the vector
    num = num1 + num2;
    num1 = num2;
    num2 = num;
  }
  while(cin>>n>>fn && (n + fn != 0)){
    i = 0;
    count = 0;
    while(n > vec[i]){//create a vector with all the numbers
      i++;
    }
    while(fn >= vec[i]) {//count the fib numbers
      i++;
      count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
