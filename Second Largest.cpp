class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = arr[0];
        for(int i = 0; i < n; i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
int secondLargest = -1;
for(int i = 0; i <n; i++){
    if(arr[i] != largest && arr[i] > secondLargest){
        secondLargest = arr[i];
    }
}
return secondLargest;
    }
};