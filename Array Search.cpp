class Solution {
  public:
    int search(vector<int>& arr, int x) {
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(x == arr[i]){
                return i;
            }
        }
        
        return -1;
    }
};