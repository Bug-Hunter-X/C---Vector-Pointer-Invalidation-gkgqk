std::vector<int> vec; vec.push_back(10); vec.push_back(20); vec.push_back(30);
int* ptr = &vec[0];
int val = *ptr; // val will be 10
vec.push_back(40); // This might invalidate the pointer ptr
val = *ptr; // val might be different or lead to a crash