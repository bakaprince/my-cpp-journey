# My C++ Journey 🚀

A place where I document my C++ learning journey — the concepts I explore, problems I solve, and little projects I build along the way.

Starting with the fundamentals and gradually working my way towards mastering modern C++.

---

## 📂 Repository Structure

```text
my-cpp-journey/
├── CMakeLists.txt
├── README.md
├── .gitignore
└── src/
    ├── 01-basics/                       # Fundamental syntax, loops, conditionals, arrays
    │   ├── hello_world.cpp
    │   ├── input_output.cpp
    │   ├── addition_subtraction.cpp
    │   ├── calc.cpp
    │   ├── calcu.cpp
    │   ├── calculator.cpp
    │   ├── double_triple_input.cpp
    │   ├── goto_input.cpp
    │   ├── multiplication_table.cpp
    │   ├── repeated_inputs.cpp
    │   ├── stop_at_37.cpp
    │   ├── sum_of_digits.cpp
    │   └── array_largest_smallest.cpp
    │
    ├── 02-functions-and-inline/         # Functions, inline keyword, overloading, references
    │   ├── inline_function.cpp
    │   ├── maxi.cpp
    │   ├── maximum_number.cpp
    │   ├── function_overloading.cpp
    │   ├── area_overload.cpp
    │   ├── pointer_reference.cpp
    │   └── company_calculator.cpp
    │
    ├── 03-classes-and-objects/          # OOP fundamentals: constructors, destructors, encapsulation
    │   ├── class_box.cpp
    │   ├── bank_account.cpp
    │   ├── bank_offer.cpp
    │   ├── bank_audit.cpp
    │   ├── student_class.cpp
    │   ├── student_dynamic.cpp
    │   ├── company_record.cpp
    │   ├── company_overloading.cpp
    │   ├── billing_counter.cpp
    │   ├── travel_application.cpp
    │   └── payment_application.cpp
    │
    ├── 04-operator-overloading/         # Unary, binary, and stream (<<, >>) operator overloading
    │   ├── complex_number_overload.cpp
    │   ├── iostream_overload.cpp
    │   ├── payment_overload.cpp
    │   ├── preincrement_overload.cpp
    │   ├── time_class_overload.cpp
    │   ├── unary_overload.cpp
    │   └── unary_overloading.cpp
    │
    ├── 05-inheritance-and-polymorphism/ # Single, multiple, hierarchical, diamond inheritance & virtual methods
    │   ├── inherit_basic.cpp
    │   ├── inheritance_animal.cpp
    │   ├── company_multiple_inheritance.cpp
    │   ├── diamond_inheritance.cpp
    │   ├── situation_inheritance.cpp
    │   ├── student_hierarchical.cpp
    │   ├── employee_ride_override.cpp
    │   ├── shape_overriding.cpp
    │   ├── shapes_override_pure_virtual.cpp
    │   └── university_inheritance.cpp
    │
    ├── 06-templates-and-stl/            # Function templates, class templates, and STL containers
    │   ├── template_practice.cpp
    │   ├── template_practice_two_types.cpp
    │   ├── template_class_practice.cpp
    │   ├── template_practice_calculator.cpp
    │   ├── university_template.cpp
    │   ├── university_utility_template.cpp
    │   └── vector_practice.cpp
    │
    ├── 07-exception-handling/           # Try-catch blocks, custom throw logic, runtime checks
    │   ├── division_exception.cpp
    │   └── withdraw_exception.cpp
    │
    ├── 08-file-io/                      # Text and binary file reading, writing, and parsing
    │   ├── binary_read_write.cpp
    │   ├── create_file.cpp
    │   ├── employee_file.cpp
    │   └── student_file.cpp
    │
    ├── 09-mini-projects/                # Real-world styled CLI console applications
    │   ├── cli_message_service.cpp      # File-based user authentication and messaging
    │   ├── cpp_database.cpp             # In-memory relational database simulator
    │   ├── employee_info_system.cpp     # Employee management with salaries and roles
    │   ├── online_banking_system.cpp    # Account creation, deposit, withdraw, balance inquiry
    │   ├── online_exam_system.cpp       # Multiple-choice exam simulator with score calculation
    │   ├── result_management_system.cpp # Student grade and score calculation system
    │   ├── student_registration_system.cpp # Student admission & enrollment record manager
    │   └── university_management_system.cpp # University faculty, student, and course tracking
    │
    └── 10-practice-questions/           # Lab tests, exam questions, and interview problems
        ├── practice_question.cpp
        ├── q00_stream_overload.cpp
        ├── q01_template_class.cpp
        ├── q02_exception_handling.cpp
        ├── q03_virtual_function.cpp
        ├── q04_polymorphism.cpp
        └── q05_employee_file.cpp
```

---

## 🛠️ How to Compile and Run

### Option 1: Using g++ or clang++ (Quick & Direct)

You can compile any individual file with C++20 support:

```bash
# Example: Running the hello world program
g++ -std=c++20 src/01-basics/hello_world.cpp -o hello_world
./hello_world

# Example: Running the CLI Message Service mini-project
cd src/09-mini-projects
g++ -std=c++20 cli_message_service.cpp -o cli_message_service
./cli_message_service
```

### Option 2: Using MSVC (Visual Studio Developer Command Prompt)

```cmd
cl /std:c++20 /EHsc src\01-basics\hello_world.cpp
hello_world.exe
```

### Option 3: Using CMake (Build All)

```bash
# Generate build configuration
cmake -B build

# Build all targets
cmake --build build

# Or build a specific target
cmake --build build --target cli_message_service
```

---

## 💡 Topics Covered

- [x] Input/Output Streams (`cin`, `cout`)
- [x] Control Flow, Loops, and Functions
- [x] Inline Functions & Function Overloading
- [x] Classes, Objects, and Encapsulation
- [x] Operator Overloading (Stream, Arithmetic, Unary, Post/Pre-increment)
- [x] Single, Multiple, Multilevel, Hierarchical & Diamond Inheritance
- [x] Virtual Functions, Pure Virtual Functions & Runtime Polymorphism
- [x] Function & Class Templates (Generic Programming)
- [x] Exception Handling (`try`, `catch`, `throw`)
- [x] File Streams (`ifstream`, `ofstream`, `fstream`, binary files)
- [x] End-to-end Console Mini-Projects

---

## 👤 Author

- **BakaPrince** - [GitHub Profile](https://github.com/bakaprince)
