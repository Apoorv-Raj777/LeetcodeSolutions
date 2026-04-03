class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>neg;
        vector<int>pos;
        vector<int>result(n);

        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        if(neg.size()==0){
            for(int i=0;i<n;i++){
                result[i]= nums[i]*nums[i];
            }
            return result;
        }
        if(pos.size()==0){
            for(int i=0;i<n;i++){
                result[i]= nums[i]*nums[i];
            }
            reverse(result.begin(),result.end());
            return result;
        }
        for(int i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
        }
        for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());

        int i =0;
        int j=0;
        int idx =0;
        while(i<neg.size()&&j<pos.size()){
            if(neg[i]<=pos[j]){
                result[idx]=neg[i];
                idx++;
                i++;
            }
            else{
                result[idx]=pos[j];
                idx++;
                j++;
            }
        }

        while(i<neg.size()){
            result[idx]=neg[i];
            idx++;
            i++;
        }
        while(j<pos.size()){
                result[idx]=pos[j];
                idx++;
                j++;
            }

            return result;
    }
};