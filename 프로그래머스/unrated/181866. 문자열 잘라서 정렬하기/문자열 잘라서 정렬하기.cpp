#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string word;
    stringstream ss(myString);
    
    while(getline(ss, word, 'x')){
        if(!word.empty()){
            answer.push_back(word);
        }
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}