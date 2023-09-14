#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for (int i = 0; i < my_strings.size(); i++) {
		answer += my_strings[i].substr(parts[i][0], parts[i][1] - parts[i][0] + 1); // substr 이 (시작, 갯수) 까지 발생하니 뒤에다 +1 을 해줌
	}
	return answer;
    return answer;
}