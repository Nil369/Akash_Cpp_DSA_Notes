<img src="https://pro2-bar-s3-cdn-cf1.myportfolio.com/97b1d4bc028e3890ce75267deb159e95/24e71a4a26b5d319d6ac79ee_rw_600.gif?h=4c5ec98e37c4fea0b6776ef182152b43" width="1500px">


# C++ Notes by Akash Halder

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
    - C++ Templates
    - C++ Class Templates
    - C++ Function Templates
    - C++ STL
    - C++ Containers
    - C++ Vectors
    - C++ Lists
    - C++ Maps

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
For more detailed notes and examples, please explore the code files in this repository. Each file is dedicated to a specific topic and provides in-depth explanations and additional examples.

`THANKS FOR READING 🙂`
