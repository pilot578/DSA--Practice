class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int currSum = arr[0];
        int maxSum = arr[0];
        for(int i = 1; i < n; i++){
            currSum = max(arr[i], currSum + arr[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};