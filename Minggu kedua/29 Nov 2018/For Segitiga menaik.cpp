#include <iostream>
using namespace std;

main()
{
    int n;
    cout<<"Masukan banyak perulangan: ";cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
