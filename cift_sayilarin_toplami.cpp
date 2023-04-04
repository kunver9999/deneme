#include<iostream>

using namespace std;

int main()
{
    int sayac = 1, toplam = 0;

    while(sayac<99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999)
    {
        if(sayac%2 == 0)
        {
            toplam = toplam + sayac;
        }
        sayac = sayac+1;
    }
    cout<<"Toplam:"<<toplam<<endl;


    return 0;
}
