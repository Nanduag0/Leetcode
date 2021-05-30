class Solution {
    public int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
    {
        int l1 = ax2 - ax1;
        int b1 = ay2 - ay1;
        int area1 = l1 * b1;
        
        int l2 = bx2 - bx1;
        int b2 = by2 - by1;
        int area2 = l2 * b2;
        
        int total_area = area1 + area2;
        
        int cx1 = Math.max(ax1, bx1);
        int cx2 = Math.min(ax2, bx2);
        int cy1 = Math.max(ay1, by1);
        int cy2 = Math.min(ay2, by2);
        
        int l3 = cx2 - cx1;
        int b3 = cy2 - cy1;
        int remove = l3 * b3;
        
        if(l3>0 && b3>0)
            total_area -= remove;
        
        return total_area;
    }
}