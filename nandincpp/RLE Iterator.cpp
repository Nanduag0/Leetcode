class RLEIterator {
public:
RLEIterator(vector<int>& A) {
    std::swap(A, B);
    cursor = 0;
}

int next(int n) {
    while(n > 0) {
        if (B[cursor] == 0) {
            cursor += 2;
        }

        if (cursor >= B.size()) return -1;
        int a = std::min(B[cursor], n);
        B[cursor] -= a;
        n -= a;
    }
	
    return B[cursor + 1];
}

private:
vector<int> B;
int cursor = -1;
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(A);
 * int param_1 = obj->next(n);
 */