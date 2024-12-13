class Solution {
    #define ll long long
    #define pii pair <int,int>
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pii, vector<pii>, greater<pii>> min_heap;
        int n= nums.size();
        
        for (int i=0; i<n; i++){
            min_heap.push(make_pair(nums[i],i));
        }

        unordered_set<int> marked_index;
        ll score=0;

        while(!min_heap.empty()){
            pii curr= min_heap.top();
            min_heap.pop();

            int val= curr.first;
            int index= curr.second;

            if(marked_index.count(index)){
                continue;
            }

            score += val;

            marked_index.insert(index);
            marked_index.insert(index-1);
            marked_index.insert(index+1);

        }
        return score;
    }
};
