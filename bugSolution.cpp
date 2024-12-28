#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec; 
  vec.push_back(10); 
  vec.push_back(20);
  vec.push_back(30);

  // Use iterators instead of raw pointers
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  vec.push_back(40); // This will not invalidate the iterators

  for (int val : vec) { // Or use range-based for loop
    std::cout << val << " ";
  }
  std::cout << std::endl;
  return 0;
}
