#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end_num) {
    vector<int> answer;
    for (int i = end_num; i <= start; i++)
    {
        answer.insert(answer.begin(), i);
    }
    return answer;
}