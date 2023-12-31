class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> ans;
        unordered_map<int,int> map;
        for(int i=0; i<n; i++)
        {
            map[arr[i]]++;
        }
        for(auto it:map){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        if(ans.size()==0)  return {-1} ;
        sort(ans.begin(),ans.end());
        return ans;
    }
};
