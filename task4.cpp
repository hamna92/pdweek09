#include <iostream>
using namespace std;
main()
{
  bool find=false;
  string alpha[4];
  int count = 0;

  for (int x = 0; x < 4; x++)
  {
    cout << "enter array";
    cin >> alpha[x];
  }
    for (int j = 0; j < 4; j++)
    {
      if (alpha[0] == alpha[j])
      {
        find=true;
      }
      else
      find=false;
    }
  cout<<find;
}