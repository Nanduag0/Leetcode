class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size(), res = 0;
        for(int left_right = 0; left_right < n; left_right++) {
            for(int up_down = 0; up_down < n; up_down++) {
                int a = 0, b = 0, c = 0, d = 0;
                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n; j++) {
                        if(img2[i][j] == 1) {
                            if(i >= up_down && j >= left_right && img1[(i - up_down + n) % n][(j - left_right + n) % n] == img2[i][j]) a++;
                            if(i >= up_down && j < n - left_right && img1[(i - up_down + n) % n][(j + left_right) % n] == img2[i][j]) b++;
                            if(i < n - up_down && j >= left_right && img1[(i + up_down) % n][(j - left_right + n) % n] == img2[i][j]) c++;
                            if(i < n - up_down && j < n - left_right && img1[(i + up_down) % n][(j + left_right) % n] == img2[i][j]) d++;
                        }
                    }
                }
                res = max(res, a);
                res = max(res, b);
                res = max(res, c);
                res = max(res, d);
            }
        }
        return res;
    }
};