vector<int> search(string& pat, string& txt) {
        // code here
         vector<int>ans;
         int pos=0;
        while ((pos = txt.find(pat, pos)) != string::npos) {
            ans.push_back(pos); // Add the current match index to the result
            pos += 1;           // Move to the next character to check for overlapping cases
        }
        
        return ans;
    }
