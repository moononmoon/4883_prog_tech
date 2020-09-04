#include<bits/stdc++.h>

using namespace std;
int main()
{
     string chr;
  int t,length;
  cin>>t;
    getchar();
    for (int j = 0;j<t;j++)
    {
        getline(cin,chr);
        length=chr.length();//get the length of the string
        stack<char>stck;//create stack
        if(length%2!=0)
            cout<<"No"<<endl;

        else
        {

            for(int i=0; i<length; i++)
            {
                if(chr[i]=='('||chr[i]=='[')
                {
                    stck.push(chr[i]);
                }
               else if((!stck.empty()&&chr[i]==')'&&stck.top()=='(')|| (!stck.empty()&&chr[i]==']'&&stck.top()=='['))
                {
                    stck.pop();
                }
                else
                {
                    stck.push(chr[i]);
                }
            }

            if(stck.empty())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }

    return 0;
}
