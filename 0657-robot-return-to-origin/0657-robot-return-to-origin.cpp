class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;

        for (char ch : moves) {  // Correct syntax for range-based for loop
            if (ch == 'U') {  // Use single quotes for character literals
                y++;
            } else if (ch == 'D') {  // 'else if' instead of 'elif'
                y--;
            } else if (ch == 'R') {
                x++;
            } else if (ch == 'L') {  // Need to check for 'L' as well
                x--;
            }
        }
        
        return x == 0 && y == 0;  // Correct placement of the return statement
    }
};
