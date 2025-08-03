class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n = arr.size();
        int largest = INT_MIN;
        int smallest = INT_MAX;
        for(int i = 0; i < n; i++){
            if( arr[i] < smallest)
                smallest = arr[i];
                if(arr[i] > largest)
                largest = arr[i];
        }
        return make_pair(smallest, largest);
    }
};