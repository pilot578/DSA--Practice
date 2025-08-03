class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n <=1) return;
        int last = arr[n-1];
        for(int i = n-1; i > 0; i--){
            arr[i] = arr[i-1];//shift to right
        
        }
        arr[0] = last;
    }
};