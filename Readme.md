# C Programming:

# Day 1:

C Pros & Cons

- Pros
    - Fast (compile)
    - Small 
    - Portable (can run any hardware platform)
    - Resource
    - Many Tool or IDE
    - Manage Memory (can access to memory)
    - Access to low level system feature

- Cons
    - Small (There are many APIs)
    - Manage Memory 
    - Runtime checking (no concept)
    - etc.

Lesson:

- Variable
- Operator
- Control Statement
- Array
- Function
- etc 


# Day 2:

- IDE (Integrated Development Enviroment)
- Coding Hello World with C Programming


# Day 3:

- Variables for storing information in memory.

- Naming convention: in C made up of letters and digits,
but the first character must be a letter (not a digit).
The underscore “_” counts as a letter.


# Day 4:

- Data Types and Declarations
**
The data types in C refer to the type of data used to store the information.
**
The syntax for C requires you to write the type
of the variable you want to declare before the variable's name.


# Day 5:

- Constants: values that do not change after they have been defined.
    - Numberic
    - Character
    - String 
    - Enumeration 
    - Const keyword

# Day 6:

- Expressions
    Learn about the Arithmetic, Relational and Equality operators.

# Day 7:

- Type Conversions
    - Implicit Type Conversion
    - Explicit Type Conversion
    - String Function

# Day 8: Increment and Decrement operators

    - (++ and --)
    - When the operand is used before the operand it is call a "prefix operator"
    - When the operand is used after the operand it is call a "postfix operator"

# Day 9: Loops

    Types of loops:
    - For Loop
    - While Loop
    - Do-While Loop


Customer:
    A = balance ($10)
    B = balance ($15)
    C = balance ($25)
    .
    .
    .

```c
for(init_expression; loop_condition; loop_expression) {

}          

while loop

while(condition_expression) {
    //exc
}

do-while loop

do {
    //coding 
}
while(condition_expression)
```

# Day 10: Condition
    - if, else if, else statements and the conditional operator.

# Day 11: Switch statement

```c
 switch(expression) {
        case value:
            program;
            break;
        case value:
            program;
            break;
        default:
            program;
            break;    
    }
```
   

# Day 12: Break and Continue

    break: exis from a loop or switch case statement
    continue: not execute statement 


# Day 13: Function

    A function is a block of code that performs some operation.
    -
    
    returnType funcName() {
        func_statement
        return;
    }
    
    returnType funcName(type param) {
        func_statement
        return;
    }

# Day 14: Variable Scope

    - Local variable (Any variables declared inside a function)
    - Local vairable start when function start
    - Globle variable (Any variables declared outside a function)
    - Global variable start when program start

    pros:
        local varirable:
            - easy to modify
            - memory (function end -> clear memory)
        global varaible:
            - reused data
    cons:
        local varirable:
            - can't reused
        global varaible:
            - store large data in memory
            - modify can be affective to other function ...

# Day 15: Array

    Array is a variable that can store multiple values.
    int a, b, c;

    ### Defining an Array
        int arrayNames[3][][];
    
    ### Indexing Array Elements
        Array index always start at 0
        ex: int arrayNames[3] = {[0]=4, [1]=8, [2]=12};

# Day 16: Structures

    In C programming, structure is a collection of variables under a single name.

    ### Structures
    struct structureName {
        dataType member1;
        dataType member2;
        ...
    };

    #include <string.h>
    strcpy() function copies the content of a string to another.

# Day 17: Pointers

    Pointers are special variables that are used to store addresses rather than values.
    
    ex: int arr[] = {1,2};
    [0]

    ### Address in C
    (&) we can get the address of a variable.
    example: &variableName

    ### Pointer
    (*) we can get the content of a memory address stored in a pointer.
    example: *ptr


# Day 18: String

    In C programming, a string is a sequence of characters terminated with a null character \0. 

# Day 19: Input and Output (I/O)

    Output:
        ... char, int, float ...
    Input:
        ... char, int ...

# Day 20: Exercise "Calculator"

    - I/O
    - Operators
    - Switch Case
    - Function        