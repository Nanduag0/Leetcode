int countOdds(int low, int high) {
    int res = (high-low)/2;
    if(low %2 != 0 || high%2 != 0)
        res++;
    return res;
}