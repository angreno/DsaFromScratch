#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for(char c: s){
            if(isalnum(c)){
                result+=tolower(c);
            }
        }
        return checkPalindrome(result,0, result.size()-1);
      }
      bool checkPalindrome(string &result,int i ,int n ){
        if(i>=result.size()/2) return true;
        if(result[i] != result[n]) return false;
        return checkPalindrome(result , i+1 , n-1);
      }
};
int main() {
    Solution sol;
    cout << sol.isPalindrome("A man, a plan, a canal: Panama") << endl;  // Output: 1 (true)
    cout << sol.isPalindrome("race a car") << endl;                      // Output: 0 (false)
}
