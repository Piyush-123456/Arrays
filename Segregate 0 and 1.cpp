class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int zero =0;
        int one = 0;
        for(int i =0;i<arr.size();i++){
            if(arr[i]==0){
                zero++;
            }
        }
        for(int i =0;i<arr.size();i++){
            if(i<zero){
                arr[i] = 0;
            }
            else{
                arr[i]= 1;
            }
        }
    }
};
