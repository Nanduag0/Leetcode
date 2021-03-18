class Solution {
public:
    bool canReach(vector<int> &arr, int idx) {
        // Base case
        if (idx < 0 || idx >= arr.size() || arr[idx] == -1) {
            return false;
        }
        // Destination
        if (arr[idx] == 0) {
            return true;
        }
        // Mark current cell as visited
        int dist = arr[idx];
        arr[idx] = -1;
        return canReach(arr, idx + dist) || canReach(arr, idx - dist);
    }
};