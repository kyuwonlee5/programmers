#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    answer = num_list.size();
    if(answer >= 11) {
        int sum = 0;
        for(int num : num_list){
            sum += num;
        }
        return sum;
    } else {
        int multiply = 1;
        for(int num : num_list){
            multiply *= num;
        }
        return multiply;
    }
}