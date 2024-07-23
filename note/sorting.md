# Sorting

**Lambda function** for customized sorting. https://leetcode.com/problems/sort-array-by-increasing-frequency

```
sort(nums.begin(), nums.end(), [&](int a, int b) {
    if (freq[a] == freq[b]) {
        return a > b; 
    }
    return freq[a] < freq[b];
});
```

- `[&](int a, int b) { ... }` is lambda function as **comparator**
- `&` enables external variables (`freq`) by reference


## Bubble sort

Continue iteration until swap doesn't occur.

```
int nums[5];
int aux;
bool swapped;

do {
  swapped = false;
  for (int i = 0; i < 4; i++) {
    if (nums[i] > numd[i + 1]) {
      swapped = true;
      aux = nums[i];
      nums[i] = nums[i + 1];
      nums[i + 1] = aux;
    
    } 
  }
} while (swapped);
```