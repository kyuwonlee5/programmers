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

/*
string solution(string n_str) {
    int offset = 0;
    for(int i = 0; i < n_str.size(); ++i)
    {
        if(n_str[i] == '0')
        {
            offset++;
        }
        else
        {
            break;
        }
    }

    return n_str.substr(offset);
}
*/
