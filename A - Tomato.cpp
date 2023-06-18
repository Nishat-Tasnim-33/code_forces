#include<bits/stdc++.h>
using namespace std;


void nishat(int n)
{
    string str;
    vector<string>nis;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        nis.push_back(str);
        for(int j=0; j<=nis.size(); j++){
            if(i==j)
            {
                cout<< "NO"<<endl;
                break;
            }
            else if(i!=j && str==nis[j])
            {
                cout<< "YES"<<endl;
                break;
            }
        }
    }
    }


int main()
{
    int siz;
    cin>>siz;
    nishat(siz);
    return 0;
}
