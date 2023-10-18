#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = (str1.find(str2) == -1 ) ? 2 : 1; // find 찾는 문자열 없을때 -1 반환
    return answer;
}