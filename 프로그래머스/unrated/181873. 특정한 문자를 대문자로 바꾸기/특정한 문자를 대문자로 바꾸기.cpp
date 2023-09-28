#include <string>
#include <vector>

using namespace std;
/*
string solution(string my_string, string alp) {
    for(int i=0;i<my_string.length();i++){
        if(my_string[i]==alp[0]){
            my_string[i] += 'A' - 'a';
        }
    }
    return my_string;
}
*/
string solution(string my_string, string alp) {
    string answer = my_string;
    for(char &c : answer) {
        if(c == alp[0]){
            c = toupper(c);
        }
    }
    return answer;
}