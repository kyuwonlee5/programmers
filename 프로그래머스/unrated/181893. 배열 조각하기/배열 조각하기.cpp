#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    
    for (int i = 0; i < query.size(); i++) {
        if (i % 2 == 0) {
            // 짝수일때 query[i] 번을 제외하고 query[i] 인덱스 뒷부분을 자름
            if (query[i] + 1 < arr.size()) {
                arr.erase(arr.begin() + query[i] + 1, arr.end());
            }
        } else {
            // 홀수일때 query[i] 의 앞부분을 자름
            if (query[i] > 0) {
                arr.erase(arr.begin(), arr.begin() + query[i]);
            }
        }
    }
    answer = arr;
    
    return answer;
}