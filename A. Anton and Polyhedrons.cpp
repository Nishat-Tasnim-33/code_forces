#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,sum=0;
    cin>>test;
    for(int i=0; i<test; i++)
    {
        string str;
        cin>>str;
        /*Tetrahedron. Tetrahedron has 4 triangular faces.
        Cube. Cube has 6 square faces.
        Octahedron. Octahedron has 8 triangular faces.
        Dodecahedron. Dodecahedron has 12 pentagonal faces.
        Icosahedron. Icosahedron has 20 triangular faces.*/
        if(str=="Tetrahedron")
        {
            sum+=4;
        }
        else if(str=="Cube")
        {
            sum+=6;
        }
        else if(str=="Octahedron")
        {
            sum+=8;
        }
        else if(str=="Dodecahedron")
        {
            sum+=12;
        }
        else if(str=="Icosahedron")
        {
            sum+=20;
        }
    }
    cout<<sum<<endl;
    return 0;
}
