# C++ Vector Pointer Invalidation
This repository demonstrates a common C++ error involving pointer invalidation when using std::vector. Modifying a vector's size (e.g., using push_back) can invalidate pointers obtained to its elements.  Accessing these invalid pointers leads to undefined behavior and potential crashes.

The `bug.cpp` file contains the buggy code.  The `bugSolution.cpp` shows a safer way to work with vector elements using iterators.