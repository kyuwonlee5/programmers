#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int total = 0;
    for(int a : arr){
        total += a;
    }
    answer.reserve(total); // total 의 용량을 미리 확보하는 명령어
    
    for(int a : arr){
        answer.insert(answer.end(), a, a);
    }
    return answer;
}