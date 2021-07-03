class Solution {
public:
  char slowestKey(vector<int> &releaseTimes, string keysPressed) 
  {
    int n = releaseTimes.size();
    int cnt[26] = {0};
    cnt[keysPressed[0] - 'a'] = releaseTimes[0];

    for (int i = 1; i < n; i++)
    {
      cnt[keysPressed[i] - 'a'] = max(cnt[keysPressed[i] - 'a'], releaseTimes[i] - releaseTimes[i - 1]);
    }

    int idx = 25;
    for (int i = 25; i >= 0; i--)
    {
      if (cnt[i] > cnt[idx]) idx = i;
    }
    return idx + 'a';
  }
};