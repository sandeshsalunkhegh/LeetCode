//1108. Defanging an IP Address - https://leetcode.com/problems/defanging-an-ip-address/
class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for(char c : address){
            if(c == '.')
                ans += "[.]";
            else
                ans += c;
        }
        cout<<ans<<endl;
        return ans;
    }
};