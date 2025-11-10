class Solution {
public:
    int minOperations(vector<int>& nums) {
        stack<int> st;
        int count = 0;
        for (auto &it : nums) {
             while (!st.empty() && it <st.top()) {
                st.pop();
            }

            if (it > 0 && (st.empty() || it > st.top())) {
                count++;
                st.push(it);
            }
        }
        return count;
    }
};