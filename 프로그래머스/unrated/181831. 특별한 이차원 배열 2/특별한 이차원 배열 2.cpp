#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = arr.size();
    for(int i = 0; i < answer; ++i){
        for(int j = 0; j < i; ++j) {
            if(arr[i][j] != arr[j][i]) {
                answer = 0;
            } else {
                answer = 1;
            }
        }
    }
    return answer;
}