#include<bits/stdc++.h>
using namespace std;
void calculate(char *input,int size)
{ 
    unordered_map<char,int>mymap;
    for(int i=0;i<size;i++)
    {
        if(mymap.count(input[i])>0)
        {
            mymap[input[i]]=mymap[input[i]]+1;
        }
        else
            mymap[input[i]]=1;
    }
    for(int i=0;i<size;i++)
    {
      if(mymap[input[i]]==1)
      {
          cout<<input[i]<<endl;
          break;
      }   
    }
}
int main()
{ 
    char input[10];
    int i;
    cout<<"Enter the string:";
    for(i=0;i<10;i++)
    {
        cin>>input[i];
    }
    calculate(input,i); 
    return 0;
}
