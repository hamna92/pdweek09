#include <iostream>
using namespace std;
main()
{
    string line;
    int isbool=true;
    int size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter the line:";
    cin>>line;
    int lenght;
    for(int i=0;i<size;i=i+1)
      {
        if(size%2==0)
        {
            isbool=true;
            
        }
        else{
              isbool=false;
              
            }

        
      }
      cout<<isbool;
}