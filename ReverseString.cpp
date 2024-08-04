#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
string s="Surbhi";
stack<char>st;
for(int i=0;i<s.length();i++)
{
char ch=s[i];
st.push(ch);
}
string ans="";
while(!st.empty())
{
char ch=st.top();
ans.push_back(ch);
st.pop();
}
cout<<"Reverse string is"<<ans;
}
