#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for (int i = 0; i < number.size(); i++) {
		answer += number[i] - '0'; // 문자를 숫자로 변환
	}
	answer %= 9; // 더한 값을 9로 나눈 나머지
    return answer;
}