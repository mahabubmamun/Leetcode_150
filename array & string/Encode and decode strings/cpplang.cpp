class Solution {
public:

    string encode(vector<string>& strs) {
        int size = strs.size();

        string res = "";
        int i = 0;
        while(size != 0)
        {
            res += to_string(strs[i].size());
            res += '#';
            res += strs[i];
            i++;
            size--;
        }
        res += ';';
        return res;
    }
    vector<string> decode(string s) {
        vector<string>res;
        int i = 0;

        while(s[i] != ';')
        {
            string curr_size_in_str = "";
            while(s[i] != '#')
            {
                // string curr_size_in_str = "";
                curr_size_in_str += s[i];
                i++;
            }
            int curr_size_in_int = stoi(curr_size_in_str);
            i = i+1;
            string curr_str = "";
            while(curr_size_in_int != 0)
            {
                curr_str += s[i];
                curr_size_in_int--;
                i++;
            }
            res.push_back(curr_str);
        }
        return res;
    }
};
