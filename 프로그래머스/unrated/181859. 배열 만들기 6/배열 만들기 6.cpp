#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i = 0;
    while(i < arr.size()){
        if(answer.empty()) {
            answer.push_back(arr[i++]);
        } else if(answer.back() != arr[i]) { // .back 은 맨 뒤에요소를 반환
            answer.push_back(arr[i++]);
        } else {
            answer.pop_back(); // 맨 뒤에요소 삭제
            i++;
        }
    }
    if(answer.empty()) {
        answer.push_back(-1);
    }
    return answer;
}