#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if (a.second == b.second) return a.first > b.first;
    return a.second < b.second;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<pair<int, int>> nums;
    
    for(auto num : numlist){
        nums.push_back(make_pair(num, abs(num - n)));
    }
    
    sort(nums.begin(), nums.end(), compare);
    for(auto num : nums){
        answer.push_back(num.first);
    }
    
    return answer;
}