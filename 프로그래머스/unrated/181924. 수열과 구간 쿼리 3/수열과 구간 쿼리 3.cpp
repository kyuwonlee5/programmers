#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (vector<int> query : queries) {
		int i = query[0];
		int j = query[1];
		// 예외처리, arr의 사이즈를 벗어나면 무시하고 다음 query 로 이동
		if (i >= arr.size() || j >= arr.size()) {
			continue;
		}
        // 값을 서로 바꿈
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	answer = arr;
    return answer;
}