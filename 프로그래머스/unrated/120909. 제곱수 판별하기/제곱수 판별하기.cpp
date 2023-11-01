#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    bool flag = false;
    int answer = 0;
    int temp = sqrt(n);
    
    if(temp * temp == n) {
        flag = true;
    } else {
        flag = false;
    }
    
    if(flag){
        answer = 1;
        return answer;
    } else {
        answer = 2;
        return answer;
    }
}