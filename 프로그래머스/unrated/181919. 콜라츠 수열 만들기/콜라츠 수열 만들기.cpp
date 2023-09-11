#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n); // 초기값을 answer vector에다가 대입
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = 3 * n + 1;
		}
		answer.push_back(n); // 변환된 값을 vector answer에 추가
	}
    return answer;
}