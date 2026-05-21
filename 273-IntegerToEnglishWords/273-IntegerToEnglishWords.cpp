// Last updated: 21/05/2026, 18:11:40
class Solution {
public:
    vector<string> below20 = {"", "One", "Two", "Three", "Four", "Five","Six", "Seven", "Eight", "Nine", "Ten","Eleven", "Twelve", "Thirteen", "Fourteen","Fifteen", "Sixteen", "Seventeen", "Eighteen","Nineteen"};

    vector<string> tens = {"", "", "Twenty", "Thirty", "Forty","Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string helper(int num) {
        if(num == 0) return "";
        else if(num < 20) return below20[num] + " ";
        else if(num < 100) return tens[num/10] + " " + helper(num%10);
        else return below20[num/100] + " Hundred " + helper(num%100);
    }

    string numberToWords(int num) {
        if(num == 0) return "Zero";
        string ans = "";
        vector<pair<int,string>> places = {{1000000000, "Billion"},{1000000, "Million"}, {1000, "Thousand"}, {1, ""}};

        for(auto &p : places) {
            int value = p.first;
            string name = p.second;
            if(num >= value) {
                ans += helper(num/value);
                if(name != "")
                    ans += name + " ";
                num %= value;
            }
        }
        ans.pop_back();
        return ans;
    }
};