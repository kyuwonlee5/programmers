#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int allOfProduct = 1; // 모든 원소의 곱
	int sum = 0;		 // 모든 원소의 합
	for (int num : num_list) {
		allOfProduct *= num;
		sum += num;
	}
	int rootOfSum = sum * sum;
	if (allOfProduct < rootOfSum) {
		answer = 1;
	}
	else {
		answer = 0;
	}
    return answer;
}