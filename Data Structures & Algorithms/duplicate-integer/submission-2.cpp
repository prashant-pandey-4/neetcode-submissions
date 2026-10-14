class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_set<int> seen;
      for(int start : nums){
            if(seen.find(start) != seen.end()){
                return true;
            }

            seen.insert(start);
      }
      return false;
    }
};