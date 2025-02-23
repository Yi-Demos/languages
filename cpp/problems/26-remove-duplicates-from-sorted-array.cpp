int removeDuplicates(int* nums, int numsSize) {
  int s = 0;

  for (int f = 1; f < numsSize; f++) {
    if (nums[s] != nums[f]) {
      s++;
      nums[s] = nums[f];
    }
  }

  return s + 1;
}