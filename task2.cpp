#include <iostream>
using namespace std;
main()
{
    string movies[5]={"gladiators","starwars","terminators","takinglives","tombrider" };
    int price[5]={500,500,500,500,500};
    int discount;
    float totalprice;
    cout<<"enter the name of movie:";
    cin>>movies[0];

    for(int i=0;i<5;i++)
    {
        if(movies[i]==movies[1] || movies[i]==movies[3])
        {
             totalprice=(price[i]*5)/10;
             cout <<discount;

        }
        else
        { 
            totalprice=(price[i]*10)/100;
            cout<<discount;
        }

    }
}