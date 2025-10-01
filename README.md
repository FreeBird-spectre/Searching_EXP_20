🔍 Search Algorithms in C++

=== Code Execution Successful ===

🎯 Aim

To study and implement fundamental search algorithms in C++, including Binary Search, Linear Search, and Sequential Search. These programs help understand how data can be searched efficiently in arrays and vectors using different strategies.

📚 Theory

Searching is a fundamental operation in computer science used to locate an element within a data structure. The efficiency of a search algorithm depends on the structure of the data and the method used.

Types of Search Algorithms Implemented:

Binary Search: Efficient for sorted arrays; uses divide-and-conquer.

Linear Search: Simple method; checks each element one by one.

Sequential Search: Similar to linear search but implemented using vectors.

🔑 Characteristics

Algorithm	Data Type	Time Complexity (Best)	Time Complexity (Worst)	Requirement

Binary Search	Array	O(1)	O(log n)	Sorted array

Linear Search	Array	O(1)	O(n)	Unsorted allowed

Sequential Search	Vector	O(1)	O(n)	Unsorted allowed

📋 Algorithm Overview

🔹 Binary Search

Start with start = 0, end = size - 1

Repeat until start <= end:

Calculate mid = (start + end) / 2

If arr[mid] == key, return mid

If arr[mid] < key, search right half

Else, search left half

If not found, return -1

🔹 Linear Search

Traverse array from index 0 to size - 1

If arr[i] == key, return i

If not found, return -1

🔹 Sequential Search

Traverse vector from index 0 to size - 1

If arr[i] == key, return i

If not found, return -1

💻 Sample Outputs

Binary Search

cpp

int arr[] = {5, 10, 15, 20, 25};

int key = 20;

Output:

Code

Element found at index 3

Linear Search

cpp

int arr[] = {3, 7, 9, 12, 18};

int key = 12;

Output:

Code

Element found at index 3

Sequential Search

cpp

vector<int> arr = {4, 8, 15, 23, 42};

int key = 15;

Output:

Code

Element found at index 2

🚀 Applications

Searching in databases and spreadsheets

Finding records in memory or files

Real-time filtering and lookup systems

Used in algorithms like binary search trees and hash tables

Useful in games, simulations, and AI decision-making

🧠 Conclusion

Search algorithms are essential tools for locating data efficiently. This project demonstrated:

Binary Search for sorted arrays

Linear and Sequential Search for unsorted data

Use of both arrays and vectors in C++

Understanding these basic search techniques lays the foundation for more advanced algorithms like hashing, tree-based search, and pattern matching.
