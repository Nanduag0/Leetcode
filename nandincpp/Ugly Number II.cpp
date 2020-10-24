#define ll long long

class Solution {
public:
    int nthUglyNumber(ll n) 
    {
        set<ll> finale, choices;
        
        choices.insert(1);
        while(finale.size() != n)
        {
            ll nxt_choices = *choices.begin();
            
            finale.insert(nxt_choices);
            choices.erase(nxt_choices);
            
            choices.insert(2*nxt_choices);
            choices.insert(3*nxt_choices);
            choices.insert(5*nxt_choices);
        }
        
        return *finale.rbegin();
    }
};