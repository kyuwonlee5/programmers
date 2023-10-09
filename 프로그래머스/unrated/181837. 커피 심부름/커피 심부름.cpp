#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for(int i = 0; i < order.size(); ++i) {
        if(order[i].find("cafe") != -1) { // find 함수 = string 에서 찾는 문자열이 없을때 -1반환, cafe 단어를 포함하면...
            answer += 5000; // 카페라떼 5000won
        } else {
            answer += 4500;
        }
    }
    return answer;
}