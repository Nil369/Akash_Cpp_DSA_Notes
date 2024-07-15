<img src="https://pro2-bar-s3-cdn-cf1.myportfolio.com/97b1d4bc028e3890ce75267deb159e95/24e71a4a26b5d319d6ac79ee_rw_600.gif?h=4c5ec98e37c4fea0b6776ef182152b43" width="1500px">


# C++ & DSA Notes by Akash Halder

Welcome to my C++ notes repo! Here, you'll find comprehensive and easy-to-understand notes on C++ programming language, along with simple code examples to help you grasp the fundamental concepts. Whether you're a beginner looking to get started with C++ or someone who wants to brush up on their knowledge, this repository is designed to cater to your learning needs.

<img src="https://i.redd.it/xxodzo30yoab1.gif" width="300px" alt="C++" align="right">

## Introduction to C++

C++ is a powerful general-purpose programming language that is widely used for developing applications that require performance, efficiency, and versatility. It supports various programming paradigms including procedural, object-oriented, and generic programming. C++ is an extension of the C programming language and provides additional features such as classes, inheritance, polymorphism, templates, and exception handling.


### Basic Concepts

1. **Variables and Data Types**
2. **Control Statements**
3. **Loops**
4. **Functions**
5. **Arrays**
6. **Pointers**
7. **Structures and Unions**
8. **Dynamic Memory Allocation**
9.  **File I/O**
10. **Object-Oriented Programming (OOP)**
11. **Templates & Standard Template Library (STL)**

    
### Easy-to-Understand Code Examples

Below are some basic examples to illustrate these concepts. For a more detailed explanation, please refer to the corresponding code files.

#### 1. Variables and Data Types

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    double height = 5.9;
    char grade = 'A';
    bool isStudent = true;

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << boolalpha << isStudent << endl;

    return 0;
}
```

#### 2. Control Statements

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
```

#### 3. Loops

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        cout << "Iteration " << i << endl;
    }

    return 0;
}
```

#### 4. Functions

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    cout << "Sum: " << result << endl;

    return 0;
}
```

#### 5. Arrays

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }

    return 0;
}
```

#### 6. Pointers

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 10;
    int *ptr = &number;

    cout << "Value: " << number << endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Dereferenced: " << *ptr << endl;

    return 0;
}
```
### 7. Structures and Unions

**Structures:**
- Structures are user-defined data types that allow grouping different data types together.
- Each element in a structure is called a member.
- Members can be of different types (e.g., int, float, char).

**Example of Structures:**
```cpp
#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
};

int main() {
    Student student1;
    student1.name = "John";
    student1.age = 20;
    student1.gpa = 3.5;

    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "GPA: " << student1.gpa << endl;

    return 0;
}
```

**Unions:**
- Unions are similar to structures but with a key difference: all members share the same memory location.
- Only one member can contain a value at any given time.
- Useful for memory-saving when storing different types of data in the same memory location.

**Example of Unions:**
```cpp
#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    Data data;
    data.i = 10;
    cout << "Data as integer: " << data.i << endl;

    data.f = 220.5;
    cout << "Data as float: " << data.f << endl;

    strcpy(data.str, "C++ Programming");
    cout << "Data as string: " << data.str << endl;

    return 0;
}
```

### 8. Dynamic Memory Allocation

- Dynamic memory allocation allows the program to allocate memory at runtime using pointers.
- This is useful when the size of data is not known at compile time.

**Functions for Dynamic Memory Allocation:**
- `malloc()`: Allocates a block of memory.
- `calloc()`: Allocates a block of memory and initializes it to zero.
- `free()`: Deallocates a previously allocated block of memory.
- `new`: Allocates memory (C++).
- `delete`: Deallocates memory (C++).

**Example of Dynamic Memory Allocation:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int* ptr;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamically allocate memory using new
    ptr = new int[n];

    // Check if memory has been allocated successfully
    if (!ptr) {
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> ptr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] ptr;

    return 0;
}
```

### 9. File I/O

- File I/O allows a program to read from and write to files.
- Use file streams (`ifstream` for input, `ofstream` for output, and `fstream` for both).

**Example of File I/O:**
```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, file!" << endl;
        outFile << "C++ File I/O example." << endl;
        outFile.close();
    } else {
        cout << "Unable to open file for writing" << endl;
    }

    // Reading from a file
    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading" << endl;
    }

    return 0;
}
```

In the examples above:
- **Structures**: The `Student` structure groups different types of data together.
- **Unions**: The `Data` union shares memory among its members.
- **Dynamic Memory Allocation**: Memory is dynamically allocated for an array of integers and then deallocated.
- **File I/O**: Demonstrates writing to and reading from a text file.

<br>

### 10. Object Oriented Programming (OOP)

Object Oriented Programming (OOP) is a programming paradigm that uses objects and classes to design and develop applications. OOP aims to implement real-world entities like inheritance, polymorphism, encapsulation, and abstraction in programming. The main principles of OOP are:

1. **Encapsulation**: Wrapping data and methods into a single unit (class).
2. **Abstraction**: Hiding the complex implementation details and showing only the essential features.
3. **Inheritance**: The mechanism by which one class can inherit properties and behaviors from another class.
4. **Polymorphism**: The ability to use a single interface to represent different underlying forms (data types).

### Basic Example of OOP in C++

Here is a simple example to illustrate OOP concepts in C++:

```cpp
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();  // Inherited from Animal class
    dog.bark(); // Specific to Dog class

    return 0;
}
```

In this example:
- **Encapsulation**: The `Animal` and `Dog` classes encapsulate data and methods.
- **Inheritance**: The `Dog` class inherits the `eat` method from the `Animal` class.
- **Polymorphism**: Although not directly shown here, polymorphism would allow different classes to be treated as instances of the same class through inheritance.
<br>
### Difference Between Procedural Oriented Programming (POP) and Object Oriented Programming (OOP)

| `Feature `                        |` Procedural Oriented Programming (POP)` | `Object Oriented Programming (OOP)`    |
|---------------------------------|---------------------------------------|--------------------------------------|
| **Approach**                    | Follows a top-down approach           | Follows a bottom-up approach         |
| **Structure**                   | Program is divided into functions     | Program is divided into objects      |
| **Data Access**                 | Data is global and shared by functions| Data is encapsulated in objects      |
| **Data Security**               | Less secure as data is exposed        | More secure due to encapsulation     |
| **Focus**                       | Focuses on functions                  | Focuses on objects                   |
| **Code Reusability**            | Less reusability                      | High reusability through inheritance |
| **Inheritance**                 | Does not support inheritance          | Supports inheritance                 |
| **Polymorphism**                | Does not support polymorphism         | Supports polymorphism                |
| **Examples**                    | C, Pascal                             | C++, Java, Python                    |

<br><br>

### 11. C++ Templates & STL

Templates in C++ allow writing generic and reusable code. They enable functions and classes to operate with different data types without rewriting the entire code for each type.

**Function Templates:**
- Function templates define a generic function that can work with any data type.

**Example of Function Template:**
```cpp
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(3, 4) << endl;          // int
    cout << "Sum of doubles: " << add(3.5, 4.5) << endl;      // double
    cout << "Sum of strings: " << add(string("Hello, "), string("World!")) << endl; // string

    return 0;
}
```

**Class Templates:**
- Class templates define a blueprint for a class that can handle different data types.

**Example of Class Template:**
```cpp
#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }
    T subtract(T a, T b) {
        return a - b;
    }
};

int main() {
    Calculator<int> intCalc;
    cout << "Integer addition: " << intCalc.add(5, 3) << endl;
    cout << "Integer subtraction: " << intCalc.subtract(5, 3) << endl;

    Calculator<double> doubleCalc;
    cout << "Double addition: " << doubleCalc.add(5.5, 3.3) << endl;
    cout << "Double subtraction: " << doubleCalc.subtract(5.5, 3.3) << endl;

    return 0;
}
```

### C++ Standard Template Library (STL)

The C++ Standard Template Library (STL) is a powerful library that provides generic classes and functions. It includes four main components:
1. **Algorithms**: Functions for sorting, searching, and manipulating data.
2. **Containers**: Data structures like vectors, lists, and maps that store collections of objects.
3. **Iterators**: Objects that point to elements within containers and are used to traverse the containers.
4. **Function Objects**: Objects that can be called as if they are ordinary functions.

**Example of STL with Vectors:**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Add elements to the vector
    numbers.push_back(6);
    numbers.push_back(7);

    // Access elements
    cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Use iterator to traverse the vector
    cout << "Vector elements using iterator: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Use algorithm to sort the vector
    sort(numbers.begin(), numbers.end());

    cout << "Sorted vector elements: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
```

**Example of STL with Maps:**
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> ageMap;

    // Insert elements into the map
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;

    // Access elements
    cout << "Alice's age: " << ageMap["Alice"] << endl;
    cout << "Bob's age: " << ageMap["Bob"] << endl;

    // Use iterator to traverse the map
    cout << "All elements in the map:" << endl;
    for (map<string, int>::iterator it = ageMap.begin(); it != ageMap.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
```

In these examples:
- **Function Templates**: `add` function template works with different data types.
- **Class Templates**: `Calculator` class template performs addition and subtraction for different data types.
- **STL with Vectors**: Demonstrates vector operations including adding, accessing, and sorting elements.
- **STL with Maps**: Demonstrates map operations including inserting, accessing, and iterating over elements.

<br><br>


---

# Data Structures and Algorithms (DSA)

## Table of Contents

1. [Arrays](#arrays)
2. [Strings](#strings)
3. [Linked Lists](#linked-lists)
4. [Stacks](#stacks)
5. [Queues](#queues)
6. [Trees](#trees)
7. [Graphs](#graphs)
8. [Hashing](#hashing)
9. [Recursion and Backtracking](#recursion-and-backtracking)
10. [Dynamic Programming](#dynamic-programming)
11. [Sorting Algorithms](#sorting-algorithms)
12. [Searching Algorithms](#searching-algorithms)

## Arrays

### Key Concepts
- Fixed-size sequential collection of elements of the same type.
- Access elements via indices.
- Common operations: Traversal, Insertion, Deletion, Searching, Sorting.

### Example Problem: Find the Maximum Element
```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMax(const vector<int>& arr) {
    int maxElement = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    vector<int> arr = {1, 3, 5, 2, 4, 6};
    cout << "Maximum Element: " << findMax(arr) << endl;
    return 0;
}
```

## Strings

### Key Concepts
- Sequence of characters.
- Common operations: Length, Concatenation, Substring, Comparison, Searching, Pattern Matching.

### Example Problem: Reverse a String
```cpp
#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    string reversedStr = str;
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(reversedStr[i], reversedStr[n - i - 1]);
    }
    return reversedStr;
}

int main() {
    string str = "Hello, World!";
    cout << "Reversed String: " << reverseString(str) << endl;
    return 0;
}
```

## Linked Lists

### Key Concepts
- Sequence of elements where each element points to the next element.
- Types: Singly Linked List, Doubly Linked List, Circular Linked List.
- Common operations: Traversal, Insertion, Deletion, Searching.

### Example Problem: Reverse a Singly Linked List
```cpp
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
```

## Stacks

### Key Concepts
- Last In First Out (LIFO) data structure.
- Operations: Push, Pop, Peek, IsEmpty.

### Example Problem: Check for Balanced Parentheses
```cpp
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else {
            if (s.empty()) return false;
            char top = s.top();
            if ((c == ')' && top == '(') || (c == '}' && top == '{') || (c == ']' && top == '[')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string str = "{[()]}";
    cout << (isBalanced(str) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
```

## Queues

### Key Concepts
- First In First Out (FIFO) data structure.
- Operations: Enqueue, Dequeue, Front, IsEmpty.

### Example Problem: Implement a Queue using Two Stacks
```cpp
#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    void enqueue(int x) {
        s1.push(x);
    }

    int dequeue() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }

    bool isEmpty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    return 0;
}
```

## Trees

### Key Concepts
- Hierarchical data structure with nodes.
- Types: Binary Tree, Binary Search Tree, AVL Tree, Red-Black Tree.
- Common operations: Traversal (Inorder, Preorder, Postorder), Insertion, Deletion, Searching.

### Example Problem: Inorder Traversal of a Binary Tree
```cpp
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);

    return 0;
}
```

## Graphs

### Key Concepts
- Collection of nodes and edges.
- Types: Directed, Undirected, Weighted, Unweighted.
- Representations: Adjacency Matrix, Adjacency List.
- Common operations: Traversal (DFS, BFS), Shortest Path (Dijkstra, Bellman-Ford), Minimum Spanning Tree (Kruskal, Prim).

### Example Problem: Depth-First Search (DFS)
```cpp
#include <iostream>
#include <vector>
using namespace std;

void DFS(int v, vector<bool>& visited, const vector<vector<int>>& adj) {
    visited[v] = true;
    cout << v << " ";
    for (int u : adj[v]) {
        if (!visited[u]) {
            DFS(u, visited, adj);
        }
    }
}

int main() {
    int V = 4;
    vector<vector<int>> adj(V);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(3);
    adj[3].push_back(3);

    vector<bool> visited(V, false);

    cout << "DFS Traversal starting from vertex 2: ";
    DFS(2, visited, adj);

    return 0;
}
```

## Hashing

### Key Concepts
- Mapping keys to values using a hash function.
- Common operations: Insertion, Deletion, Searching.

### Example Problem: Implement a Simple Hash Table
```cpp
#include <iostream>
#include <list>
using namespace std;

class HashTable {
    int BUCKET;
    list<int>* table;

public:
    HashTable(int V) {
        BUCKET = V;
        table = new list<int>[BUCKET];
    }

    void insertItem(int key) {
        int index = key % BUCKET;
        table[index].push_back(key);
    }

    void deleteItem(int key) {
        int index = key % BUCKET;
        table[index].remove(key);
    }

    bool searchItem(int key) {
        int index = key % BUCKET;
        for (auto x : table[index]) {
            if (x ==

 key) return true;
        }
        return false;
    }

    void displayHash() {
        for (int i = 0; i < BUCKET; i++) {
            cout << i;
            for (auto x : table[i])
                cout << " --> " << x;
            cout << endl;
        }
    }
};

int main() {
    int keys[] = {15, 11, 27, 8, 12};
    int n = sizeof(keys) / sizeof(keys[0]);

    HashTable h(7);
    for (int i = 0; i < n; i++) {
        h.insertItem(keys[i]);
    }

    h.displayHash();

    return 0;
}
```

## Recursion and Backtracking

### Key Concepts
- Recursion: Function calling itself.
- Backtracking: Trying out all possible solutions and eliminating invalid ones.

### Example Problem: Solving N-Queens Problem
```cpp
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col) {
    int i, j;
    int N = board.size();

    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

bool solveNQUtil(vector<vector<int>>& board, int col) {
    int N = board.size();
    if (col >= N)
        return true;

    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;

            if (solveNQUtil(board, col + 1))
                return true;

            board[i][col] = 0;
        }
    }

    return false;
}

void solveNQ(int N) {
    vector<vector<int>> board(N, vector<int>(N, 0));

    if (solveNQUtil(board, 0)) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
    } else {
        cout << "Solution does not exist" << endl;
    }
}

int main() {
    int N = 4;
    solveNQ(N);
    return 0;
}
```

## Dynamic Programming

### Key Concepts
- Solving problems by breaking them into simpler subproblems and storing the results to avoid redundant calculations.

### Example Problem: Fibonacci Sequence
```cpp
#include <iostream>
using namespace std;

int fib(int n) {
    int* f = new int[n + 1];
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

int main() {
    int n = 10;
    cout << "Fibonacci number is " << fib(n) << endl;
    return 0;
}
```

## Sorting Algorithms

### Key Concepts
- Arranging elements in a particular order.
- Common algorithms: Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, Heap Sort.

### Example Problem: Quick Sort
```cpp
#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}
```

## Searching Algorithms

### Key Concepts
- Finding an element in a collection.
- Common algorithms: Linear Search, Binary Search.

### Example Problem: Binary Search
```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        cout << "Element is present at index " << result << endl;
    else
        cout << "Element is not present in array" << endl;
    return 0;
}
```


Feel free to customize the content and add more examples or explanations as needed. This `README.md` provides a comprehensive guide for anyone preparing for technical interviews with a focus on essential DSA topics.
For more detailed notes and examples, please explore the code files in this repository. Each file is dedicated to a specific topic and provides in-depth explanations and additional examples.

`THANKS FOR READING 🙂`
