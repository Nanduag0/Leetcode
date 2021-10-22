class Bank {
    vector<long long> balance;
    bool valid(int account)
    {
        return account > 0 && account <= balance.size();
    }
    bool enough(int account, long long money)
    {
        return balance[account - 1] >= money;
    }
public:
    Bank(vector<long long>& balance) : balance(balance) {}
    bool transfer(int from, int to, long long money) {
        if (valid(from) && valid(to) && enough(from, money)) {
            balance[from - 1] -= money;
            balance[to - 1] += money;
            return true;
        }
        return false;
    }
    bool deposit(int account, long long money) {
        if (valid(account)) {
            balance[account - 1] += money;
            return true;
        }
        return false;
    }
    bool withdraw(int account, long long money) {
        if (valid(account) && enough(account, money)) {
            balance[account - 1] -= money;
            return true;
        }
        return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */