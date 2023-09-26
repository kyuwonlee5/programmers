#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    // n번째 까지 자르기
    for (int i = n; i < num_list.size(); i++) {
        answer.push_back(num_list[i]);
    }
    // 0부터 n까지 포함
    for (int i = 0; i < n; i++) {
        answer.push_back(num_list[i]);
    }
    return answer;
}