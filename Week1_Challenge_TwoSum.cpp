#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Solution class
class Solution {
public:
    //  finding two indices to add up to gt target
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;  // Map is to store the numbers and their indices
        vector<int> result;  // Vector is  to store the result
        
        // iteration
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; 
            
            // If the complement is found in the map it will return indices
            if (num_map.find(complement) != num_map.end()) {
                result.push_back(num_map[complement]);
                result.push_back(i);
                return result;
            }
            
            // else number and its index to the map
            num_map[nums[i]] = i;
        }
        return result;
    }
};

int main() {
    // Creating an instance of Solution
    Solution solution;
    
    // example 1: nums = [2, 7, 11, 15], target = 9
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    
    cout << "Indices of the two numbers that add up to the target: ";
    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl;
    
    // example 2: nums = [3, 2, 4], target = 6
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = solution.twoSum(nums2, target2);
    
    cout << "Indices of the two numbers that add up to the target: ";
    for (int i : result2) {
        cout << i << " ";
    }
    cout << endl;

    // example 3: nums = [3, 3], target = 6
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = solution.twoSum(nums3, target3);
    
    cout << "Indices of the two numbers that add up to the target: ";
    for (int i : result3) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}