# Median of Two Sorted Arrays

*   **Approach Summary**
    The provided solution merges the two sorted input arrays, `nums1` and `nums2`, into a new single sorted array `res`. It uses a two-pointer approach to iterate through both `nums1` and `nums2`, picking the smaller element at each step and appending it to `res`. After both arrays are fully merged into `res`, it calculates the median. If the total number of elements (`m+n`) is odd, the median is the element at `res[(m+n)/2]`. If the total number of elements is even, the median is the average of the two middle elements: `(res[(m+n)/2 - 1] + res[(m+n)/2]) / 2.0`.

*   **Time Complexity**
    The merging process involves iterating through all elements of both `nums1` and `nums2` once. Each element is added to the `res` vector. In total, `m+n` elements are processed and stored. Appending to a `std::vector` using `push_back` takes amortized O(1) time. Therefore, the merge operation takes O(m + n) time. Finding the median afterwards takes O(1) time. Thus, the overall time complexity is O(m + n).

*   **Space Complexity**
    A new vector `res` is created to store all elements from `nums1` and `nums2`. The size of this vector will be `m + n`. This requires O(m + n) extra space.