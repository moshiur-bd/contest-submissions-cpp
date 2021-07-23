#include<bits/stdc++.h>
using namespace std;

inline bool canWin(int goals,  int oppositeGoals, int oppositeOpportunities) {
    return goals > (oppositeGoals + oppositeOpportunities);
}

int minKickEven(string &s){
    int goalEven = 0, goalOdd = 0, oppEven = 5, oppOdd = 5;
    for (int i = 0; i < s.size(); i++)
    {
        if(i % 2 == 0){
            if(s[i] == '?' || s[i] == '1')
            {
                goalEven++;
            }
            oppEven --;
        } else {
            if (s[i] == '1')
            {
                goalOdd++;
            }
            oppOdd --;
        }
        if(canWin(goalEven, goalOdd, oppOdd)){
            return i + 1;
        }
    }
    return s.size();
}

int minKickOdd(string &s)
{
    int goalEven = 0, goalOdd = 0, oppEven = 5, oppOdd = 5;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] == '1')
            {
                goalEven++;
            }
            oppEven--;
        }
        else
        {
            if (s[i] == '?' || s[i] == '1')
            {
                goalOdd++;
            }
            oppOdd--;
        }
        if (canWin(goalOdd, goalEven, oppEven))
        {
            return i + 1;
        }
    }
    return s.size();
}

int main(){
    //freopen("in.txt", "r", stdin);
    int TC;
    scanf("%d", &TC);
    for(int tc = 1; tc <= TC; tc++){
        string s;
        cin >> s;
        cout << min(minKickEven(s), minKickOdd(s)) << "\n";
    }
    return 0;
}
