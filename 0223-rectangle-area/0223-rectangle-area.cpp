class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int total=(ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1);
        int a=max(ax1,bx1);
        int b=max(ay1,by1);
        int c=min(ax2,bx2);
        int d=min(ay2,by2);
        if((c-a)<0 || (d-b)<0){
            return total;
        }
        else{
            return total-((c-a)*(d-b));
        }
    }
};