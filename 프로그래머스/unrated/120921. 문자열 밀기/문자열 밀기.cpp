#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = -1;
    
    // 길이 비교
    if(A.length() != B.length()) {
        return answer;
    }
    
    // A를 밀었을때 B와 같은지 확인
    for(int i = 0; i < A.length(); ++i) {
        if(A == B) { // A 와 B 가 같아지는 횟수 출력
            return i;
        }
        
        char lastChar = A.back();
        A.pop_back();
        A = lastChar + A;
    }
    
    // A 와 B 가 일치하는 경우
    if(A == B) {
        return 0;
    }
    return answer;
}