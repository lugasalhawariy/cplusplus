#include <iostream>
using namespace std;

main()
{
    int n;
    cout<<"Masukan banyak perulangan: ";cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
            cout<<" ";
        for(int j=1; j<=i*2-1; j++)
            cout<<"*";

        cout<<endl;
    }
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            cout<<" ";
        for(int j=n; j>=i*2-n; j--)
            cout<<"*";

        cout<<endl;
    }
}
