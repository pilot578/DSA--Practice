class Solution {
  public:
    int search(int k, vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(k == arr[i]){
            return i + 1;//1-based indexing(position checking)
            }
            }
        return -1;
    }
};
