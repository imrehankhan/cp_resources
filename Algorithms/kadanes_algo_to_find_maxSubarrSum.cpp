ll maxSubArraySum(const vector<ll>& v) {
    ll currentSum = 0;
    ll maxSum = LLONG_MIN;
    
    for(ll i = 0; i < v.size(); i++) {
        currentSum = max(v[i], currentSum + v[i]);
        maxSum = max(maxSum, currentSum); 
    }
    
    return maxSum;
}