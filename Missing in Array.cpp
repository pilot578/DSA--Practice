class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n = arr.size() + 1;
       long long total = n * (n+1) / 2;
       long long sum = 0;
       for(int num : arr)
           sum += num;
           return (int)(total - sum);
       
       }
    
};