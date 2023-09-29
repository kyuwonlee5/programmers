#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    int pos = myString.rfind(pat); // pat의 부분문자열을 맨 뒤에서부터 일치하는 인덱스번호 
    string answer = myString.substr(0, pos+pat.size());
    return answer;
    
}