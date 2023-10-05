#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer = arr;
    if(arr.size() % 2 == 0) { // arr의 길이가 짝수
        for(int i = 1; i < answer.size(); i += 2){
            answer[i] += n;
        }
    } else { // arr의 길이가 홀수
        for(int i = 0; i < answer.size(); i += 2){
            answer[i] += n;
        }
    }
    return answer;
}