#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int myStringLen = myString.length(); // myString length
    int patLen = pat.length(); // pat length
    
    // myString 의 시작 인덱스부터 끝 인덱스 설정
    for(int i = 0; i <= myStringLen - patLen; i++) {
        bool match = true; // 매칭되는거 true로 초기화
        //pat 문자와 myString 의 문자열 비교
        for(int j = 0; j < patLen; j++){
            if(tolower(myString[i+j]) != tolower(pat[j])){ //myString 과 pat의 문자열이 다르면
                match = false;
                break;
            }
        }
        if(match){
            answer = 1;
        }
    }
    return answer;
}