#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    //int answer = 0;
    // 뒤에서 부터 찾기
	size_t found = my_string.rfind(is_suffix);
	// 뒤에서 시작하는지 확인 
	if (found != string::npos && found == my_string.size() - is_suffix.size()) { // string::npos 는 find할때 찾는 단어가 없으면 npos를 출력
		return 1;
	}
	else {
		return 0;
	}
    //return answer;
}