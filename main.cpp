// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    // Given an array of integers, 
    // return indices of the two numbers 
    // such that they add up to a specific target
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        bool done = false;
        int len = nums.size();
        for (int i = 0; i < len && !done; ++i) {
          int lookingFor = target - nums[i];
          for (int j = i + 1; j < len && !done; ++j) {
            if (nums[j] == lookingFor) {
                result.push_back(i);
                result.push_back(j);
                done = true;
            }
          }
        }
        return result;
    }
};


int main() {
  Solution S;
  vector<int> got;
  vector<int> ex1{2, 7, 11, 15};

  got = S.twoSum(ex1, 9);
  cout << "[" << got[0] << ", " << got[1] << "]" << endl;

  vector<int> ex2{7, 4, 11, 2};
  got = S.twoSum(ex2, 9);
  cout << "[" << got[0] << ", " << got[1] << "]" << endl;

  vector<int> ex3{4, 7, 2, 6};
  got = S.twoSum(ex3, 9);
  cout << "[" << got[0] << ", " << got[1] << "]" << endl;

}
