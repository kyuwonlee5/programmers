#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int max_length = 0;
    vector<int> strlen(30);
    for(string s : strArr){
        strlen[s.size() - 1] += 1;
    }
    for(int i : strlen) {
        max_length = max(i, max_length);
    }
    return max_length;
}