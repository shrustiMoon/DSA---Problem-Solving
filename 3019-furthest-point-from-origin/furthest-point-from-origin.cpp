class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int blank = 0;

        // To count the total L ,R , _ 
        for(char c : moves){
            if(c == 'L') left++;
            else if(c == 'R') right++;
            else blank++;
        }
        // To find max distance
        int distance = abs(left-right);
        
        return distance + blank;
    }
};