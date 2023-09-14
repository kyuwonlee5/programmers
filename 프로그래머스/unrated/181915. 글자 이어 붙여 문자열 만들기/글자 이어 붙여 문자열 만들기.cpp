#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    for (int index : index_list) {
		if (index >= my_string.size()) { // string 의 범위를 벗어나면 다음으로 이동
			continue;
		}
		answer += my_string[index];
	}
    return answer;
}