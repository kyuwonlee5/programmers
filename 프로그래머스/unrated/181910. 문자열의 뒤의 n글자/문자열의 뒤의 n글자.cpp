#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = my_string.substr(my_string.length()-n); //substr(숫자) 이면 숫자가 시작인덱스 ~ 끝
	return answer;
}