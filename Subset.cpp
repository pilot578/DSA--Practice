cclass Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
       unordered_map<int, int>freq;
       for(int x : a){
           freq[x]++;
       }
       for(int x : b){
           if(freq[x] == 0){
               return false;
           }
           freq[x]--;
       }
       return true;
    }
};