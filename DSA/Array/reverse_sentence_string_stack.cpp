//Reverse of a sentence(string) using array(stack would be implemented)


#include<iostream>
#include<stack>   //This is STL function
using namespace std;


void reverseSentence(string s)
{
    stack<string> st;   //datatype of stack is string.


    for(int i=0;i<s.length();i++)
    {
        string word="";
        while(s[i]!=' ' && i<s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())  //Empty of stack is not true
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}


int main()
{
    string s;
    getline(cin,s);            //Technique of take input in string.
    reverseSentence(s);
}