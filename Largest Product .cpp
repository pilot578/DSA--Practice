class Solution {
  public:
    int findMaxProduct(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int maxProduct = 0;
        for(int i = 0; i <= n-k; i++){
            int product = 1;
            for(int j = 0; j < k; j++){
                product *= arr[i + j];
                maxProduct = max(maxProduct, product);
            }
        }
        return maxProduct;
    }
};