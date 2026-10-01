class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if (piles.size() == 1){
            if (piles[0] % h != 0){
                return piles[0] / h + 1;
            } 
            return piles[0]/h;
        }
        // obtain the max pile
        int max_pile = 0;
        int min_pile = 1;
        for (int pile: piles){
            if (pile > max_pile) max_pile = pile;
        }
        // then check what is the minimum by dividing max_pile by 2 on every search
        int curr_divider = max_pile;
        int curr_hour_needed;
        int min_divider = max_pile;
        int min = min_pile;
        while (max_pile != min_pile){
            curr_divider = (max_pile + min_pile)/2;
            curr_hour_needed = 0;
            for (int pile:piles){
                if (pile % curr_divider == 0) {
                   curr_hour_needed += pile/curr_divider;
                } else{
                    curr_hour_needed += pile/curr_divider + 1;
                }
            }
            if (curr_hour_needed <= h){
                if (curr_divider < min_divider){
                    min_divider = curr_divider;
                    max_pile = curr_divider;
                } else{
                    min_pile = curr_divider + 1;
                }
            } else{
                min_pile = curr_divider + 1;
            }
        }
        return min_divider;
    }
};
