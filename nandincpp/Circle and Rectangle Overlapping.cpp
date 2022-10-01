class Solution {
public:
    bool checkOverlap(int r, int x_center, int y_center, int x1, int y1, int x2, int y2) 
    {
        int xnew = x1 - x_center;
        int ynew = y1 - y_center;
        
        int xnew2 = x2 - x_center;
        int ynew2 = y2 - y_center;
        
        int x_sq = (xnew*xnew2)>0 ? min(xnew*xnew, xnew2*xnew2) : 0;   
        int y_sq = (ynew*ynew2)>0 ? min(ynew*ynew, ynew2*ynew2) : 0;
        
        return x_sq+y_sq <= r*r;
    }
};