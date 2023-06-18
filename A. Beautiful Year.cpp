#include <bits/stdc++.h>

using namespace std;

vector <int> integerToArray(int x)
{
    vector <int> resultArray;
    while (true)
    {
        resultArray.insert(resultArray.begin(), x%10);
        x /= 10;
        if(x == 0)
            return resultArray;
    }
}

int main()
{
    int a;
    cin>>a;
    int c=a+1;
    while(true)
    {
        vector <int> temp = integerToArray(c);
        int tempsize = temp.size();
        for(int i=0; i<tempsize; i++)
        {
            for(int j=i+1; j<tempsize; j++)
            {
                if(temp[i]==temp[j])
                {
                    c++;
                    temp = integerToArray(c);
                }
                else
                {
                    for(int i=0; i<tempsize; i++)
                    {
                        cout<<temp[i];
                    }
                    break;

                }
                break;
            }
        }
break;
    }
    return 0;
}
