#include <iostream>
// using namespace std;

void ECRemoveSpace(int nums[], int len, int val)
{
  // your code here
  int i = 0;
  int backwards = len - 1;

  while (i < backwards)
  {
    if (nums[i] == val) {
      int temp = nums[backwards];
      nums[backwards] = nums[i];
      nums[i] = temp;
      backwards--;
    } else {
      i++;
    }
  }

  std::cout << len - backwards + 1 << std::endl;
  
}

int main()
{
  int nums1[] = {3,2,2,3};
  ECRemoveSpace(nums1, 4, 3); 
  std::cout << "nums1: ";
  for(int i=0; i<4; ++i)
  {
    std::cout << nums1[i] << " ";
  } 
  std::cout << std::endl;
  int nums2[] = {0,1,2,2,3,0,4,2};
  ECRemoveSpace(nums2, 8, 2); 
  std::cout << "nums2: ";
  for(int i=0; i<8; ++i)
  {
    std::cout << nums2[i] << " ";
  } 
  std::cout << std::endl;
  return 0;
}

