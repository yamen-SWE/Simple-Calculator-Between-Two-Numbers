# C Cumulative Calculator 🧮

A dynamic command-line calculator built in C that supports continuous, cumulative arithmetic operations. Unlike simple calculators, this program keeps track of the result and allows users to perform multiple operations in a single session.

## 🚀 Features
- **Cumulative Calculations:** The result of the previous operation is used as the starting point for the next one.
- **Error Handling:** - Prevents division by zero with an informative warning.
  - Detects and ignores invalid operation symbols while preserving the current total.
- **Counter (i):** Tracks the number of operations performed during the session.
- **Graceful Exit:** Users can stop calculations at any time by entering the `!` symbol.

## 🛠️ How it Works
The program utilizes a `while` loop to maintain the calculation session and a `switch-case` statement to handle the arithmetic logic. It stores the running total in a `float` variable to ensure precision.



## 💻 Code Snippet
```c
// Example of the cumulative logic used in the project
switch(operationType) {
    case '+':
        num1 = num1 + num2;
        break;
    case '/':
        if(num2 == 0) {
            printf("Please do not enter zero in the denominator.\n");
        } else {
            num1 = num1 / num2;
        }
        break;
}
```

## How to Run
1. Clone the repository.
2. Open the project in Code::Blocks or any C compiler.
3. Compile and run main.c.
4. Follow the on-screen instructions.

## Author
**Yamen Bilal Abu Hilal**
*Computer Systems and Software Engineering Student at Al-Azhar University*
