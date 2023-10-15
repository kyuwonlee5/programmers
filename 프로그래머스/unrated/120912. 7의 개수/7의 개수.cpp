#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(int i = 0; i < array.size(); ++i) {
        while(true){
            if(array[i] == 0) break;
            if(array[i] % 10 == 7) {
                answer++;
            }
            array[i] /= 10;
        }    
    }
    return answer;
}