#include <iostream>
using namespace std;
main()
{
    int counter=0;
    string s1;
    string s2;
    cout<<"enter the first line:";
    cin>>s1;
    cout<<"enter the second line:";
    cin>>s2;
    int i=0;
    while(i<4)
    {
        for(int x=0 ;x<4;x++)
        {
            if(s1[i]==s2[x])
            {
              counter++;
              break;
            }
            i++
        }
        cout<<counter;

    }


}