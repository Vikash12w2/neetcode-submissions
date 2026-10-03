class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(std::remove_if(s.begin(), s.end(), [](char r){return !isalnum(r);}), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int right = s.length()-1;
        int left = 0;
        while(left<=right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
