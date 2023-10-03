#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(char &ch : myString){
        ch = ch == 'A' ? 'B' : 'A';
    }
    if(myString.find(pat) != string::npos){
        answer = 1;
    }
    return answer;
}