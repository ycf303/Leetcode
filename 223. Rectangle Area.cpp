class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) 
    {
        int res = (C-A)*(D-B)+(G-E)*(H-F);
        
        if (E < C && G > A && H > B && D > F)
        {
            res -= (min(C,G) - max(A,E))*(min(D,H) - max(B,F));
        }
        return res;
    }
};