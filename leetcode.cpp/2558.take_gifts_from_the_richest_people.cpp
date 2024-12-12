class Solution {
    #define ll long long
public:
    long long pickGifts(vector<int>& gifts, int k) {

        priority_queue<int> heap(gifts.begin(), gifts.end());

        while(k--){
            int max= heap.top();
            heap.pop();
            heap.push(sqrt(max));
        }
        ll sum= 0;
        while(!heap.empty()){
            sum += heap.top();
            heap.pop();
        }
        return sum;
    }
};
