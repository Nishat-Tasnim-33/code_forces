#include<bits/stdc++.h>
using namespace std;

int main()
{
    int people,cnt=0;
    cin>>people;
    vector<int>decision;
    for(int i=0; i<people; i++)
    {
        int opinion;
        cin>>opinion;
        decision.push_back(opinion);
    }
    for(int i=0; i<decision.size(); i++){
        if(decision[i]==1){
            cnt++;
            break;
        }
    }
    if(cnt>0){
        cout<< "HARD"<<endl;
    }
    else{
        cout<< "EASY"<<endl;
    }
    return 0;
}
