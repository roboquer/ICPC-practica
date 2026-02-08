#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin >> S;
    int score = 0;
    vector<pair<string,int>> patterns = {
        {"ha",1},
        {"boooo",-1},
        {"bravo",3}
    };
    for(auto &p : patterns){
        string &sub = p.firts;
        int val = p.second;

        size_t pos = S.find(sub);
        while(pos != string::npos){
            score += val;
            pos = S.find(sub, pos + 1);
        }
    }
    cout << "EL resultado es: " << score;
    return 0;
}