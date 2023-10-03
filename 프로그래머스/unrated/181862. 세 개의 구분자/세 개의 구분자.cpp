#include <string>
#include <vector>
#include <sstream>
#include <regex>

using namespace std;

vector<string> solution(string myStr) {
    myStr = regex_replace(myStr, regex("[abc]"), " "); // abc를 공백으로 치환
    vector<string> answer;
    stringstream ss(myStr);
    string str;
    while(ss >> str) {
        answer.push_back(str);
    }
    if(answer.empty()) {
        answer.push_back("EMPTY");
    }
    return answer;
}