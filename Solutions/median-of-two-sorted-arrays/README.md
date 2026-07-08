# Median of Two Sorted Arrays

The provided C++ solution code is for the "Two Sum" problem, not the "Median of Two Sorted Arrays" problem as described in the problem statement. The class name `Solution` and method signature `twoSum(vector<int>& nums, int target)` clearly indicate this. Therefore, the analysis below pertains to the "Two Sum" problem, which is what the code actually implements.

### Approach Summary

The provided solution implements a common approach to solve the "Two Sum" problem. It iterates through the input `nums` array once. For each number `nums[i]`, it calculates the `second` number needed to reach the `target` (i.e., `target - nums[i]`). It then checks if this `second` number already exists in a hash map (`unordered_map`). If found, it means the pair has been identified, and their indices are returned. If not found, the current number `nums[i]` and its index `i` are stored in the hash map for future lookups. This allows for efficient lookups of required complements.

### Time Complexity

O(N), where N is the number of elements in the `nums` array.
The solution iterates through the `nums` array once. Inside the loop, hash map operations (insertion `m[first]=i` and lookup `m.find(second)`) take an average of O(1) time. In the worst-case scenario for `unordered_map` (due to hash collisions), these operations could degrade to O(N), but this is rare in practice. Given the typical performance of hash maps, the overall time complexity is linear.

### Space Complexity

O(N), where N is the number of elements in the `nums` array.
In the worst case, the `unordered_map` `m` will store all N elements from the `nums` array along with their indices if no pair is found until the very end or if no pair exists. This storage contributes to a linear space complexity.