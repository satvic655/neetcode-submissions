class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int p = t.size();
        unordered_map<char,int>mp;
        if(p!=n){
           return false;
        }
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++){
        if(mp.find(t[i])==mp.end()){
            return false;
        }
        else{
            mp[t[i]]--;
            if(mp[t[i]]==0){
                mp.erase(t[i]);
            }
        }
        }
        return true;
    }
};
