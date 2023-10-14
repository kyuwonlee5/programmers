#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer= arr;
  int max_size = max(arr.size(), arr[0].size()); // max(a,b) = a 와 b의 값중 큰값을 반환

  for(vector<int> &row : answer) {
    row.resize(max_size, 0);
  }

  while (answer.size() < max_size)
  {
    answer.push_back(vector<int>(max_size, 0));
  }
    return answer;
}