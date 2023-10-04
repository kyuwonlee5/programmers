#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < arr1.size(); i++){
        sum1 += arr1[i];
    }
    for(int i = 0; i < arr2.size(); i++){
        sum2 += arr2[i];
    }
    if(arr1.size() != arr2.size()){
        return arr1.size() > arr2.size() ? 1 : -1;
    }
    answer = sum1 > sum2 ? 1 : (sum1 < sum2 ? -1 : 0);
    return answer;
}