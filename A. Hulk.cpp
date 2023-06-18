#include<bits/stdc++.h>
using namespace std;

void hulk(int a)
{
    if(a==1) cout<< "I hate it"<< endl;
    else if(a==2) cout<< "I hate that I love it"<< endl;
    else if(a>2 )
    {
        if(a%2!=0)
        {
            for(int i=1; i<a; i++)
            {
                if(i%2!=0)
                    cout<< "I hate that ";
                else
                    cout<<"I love that ";
            }
            cout<< "I hate it"<<endl;
        }
        else
        {
            for(int i=1; i<a; i++)
            {
                if(i%2!=0)
                    cout<< "I hate that ";
                else
                    cout<<"I love that ";
            }
            cout<< "I love it"<<endl;
        }

    }
}


int main()
{
    int a;
    cin>>a;
    hulk(a);
    return 0;
}
