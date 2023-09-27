#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
   int evenNum = 0;
    int oddNum = 0;

    for (int i = 0; i < num_list.size(); ++i) {
        if (i % 2 == 0) { // 짝수 인덱스
            evenNum += num_list[i];
        }
        else {
            oddNum += num_list[i];
        }
    }

    return (evenNum > oddNum) ? evenNum : oddNum;
}