#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    vector<bool> remove(my_string.size(), false);
    for (int i : indices)
    {
        remove[i] = true;
    }

    for (int i = 0; i < my_string.size(); ++i)
    {
        if (remove[i] != true)
        {
            answer += my_string[i];
        }
    }
    return answer;
}