class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;  //copy the original list of numbers
        sort(temp.begin(),temp.end()); // sorting the list
        unordered_map<int,int>d; //dictionery
        for(int i =0; i<nums.size();i++){
            if(d.find(temp[i])==d.end()){
                d[temp[i]] = i;
            }
        }
        vector<int> ret;
        for(int num: nums){
            ret.push_back(d[num]);
        }
        return ret;

    }
};