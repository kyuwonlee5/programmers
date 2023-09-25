#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
      vector<int> answer(52, 0); //  대문주 A - Z & 소문자 a - z 의 char 숫자를 0으로 초기화

    for (char c : my_string) 
    {
        if (c >= 'A' && c <= 'Z')
        {
            answer[c - 'A']++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            answer[c - 'a' + 26]++;
        }
    }
    return answer;
}