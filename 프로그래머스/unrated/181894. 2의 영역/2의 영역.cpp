#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int first = -1;
    int last = -1;

    // 2의 위치 찾기
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 2) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    // 2가 없으면 -1반환
    if (first == -1) {
        return {-1};
    }

    // 첫번째 2의 위치와 두번째 2의 위치사이에 부분배열
    answer = vector<int>(arr.begin() + first, arr.begin() + last + 1);
    return answer;
}