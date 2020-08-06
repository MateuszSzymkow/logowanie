#include <iostream>

using namespace std;
string log, haslo;
int main()
{
    cout << "Podaj login" << endl;
    cin>>log;
    cout<<"Podaj haslo"<<endl;
    cin>>haslo;

    if((log=="mateusz")&&(haslo=="szymkow"))
    {
        cout<<"Zalogowales sie poprawnie";
    }
    else
    {
        cout<<"Cos zjebales :/";
    }


    return 0;
}
