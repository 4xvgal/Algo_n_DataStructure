#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  // vector에는 int가 들어가는 배열
  // target은 두수의 합 목표이다.
  // 배열내에서 target을 만들기 위한 두 수의 인덱스를 반환한다.
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> output;
    int first = 0, second = 0;

    // O(n^2) 형태로 bruteforce하는 알고리즘
    // 첫번째 요소를 선택하고 target과의 차이를 저장
    // 차이에 해당하는 요소를 찾으면 인덱스를 저장
    // 프로그램 종료
    for (int i = 0; i < nums.size(); i++) {
      int difference = target - nums[i];
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[j] == difference) {
          first = i;
          second = j;
          break;
        }
      }
    }
    // 출력 배열에 값 추가
    output.emplace_back(first);
    output.emplace_back(second);
    return output;
  };
};

int main() {
  Solution sol;
  int arr[] = {3, 3};
  vector<int> testcase3(begin(arr), end(arr));
  int target = 6;

  vector<int> result = sol.twoSum(testcase3, target);

  // 결과 출력
  cout << "Result ; ";
  for (int index : result) {
    cout << index << " ";
  }
  cout << "\n";
  return 0;
}
