#include <iostream>
using namespace std;
main()
{
   string fruits[4]={"peach","guava","apple","watermellon" };
   int price[4]={60,70,40,30};
   int quantity;
   int totalprice;
   int newfruits;
      cout<<"enter the name of fruits:";
      cin>>fruits;
      cout<<"enter the quantity of fruits:";
      cin>>quantity;
   
   for(int i=0; i<4; i++)
   {
     
      if(newfruits==fruits[0])
      {
         totalprice=quantity/price[i];
      }
      cout<<totalprice;

   }
    
}