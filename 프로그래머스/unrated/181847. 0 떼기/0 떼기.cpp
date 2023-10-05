#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int first_non_zero = n_str.find_first_not_of('0');
    if(first_non_zero != '-1'){
        answer = n_str.substr(first_non_zero);
    } else {
        answer = "0";
    }
    return answer;
}