# Worksheet
### Ex 1
Ensure you can answer all the questions in C3 sildes!


### EX2
Read Matlab documentation for functions: *save, load, (s|f) printf, rand, fopen,fclose,randperm*.
- use `help function_name` to read quick and efficient documentation
- **save**:
    - **Purpose**: Saves workspace variables to a file.
    - **Syntax**: 
        - `save(filename)`: Saves all variables in the workspace to the file filename.
        - `save(filename, variables)`: Saves the specified variables to the file filename.
        - `save(filename, variables, '-append')`: Appends variables to an existing file.
- **load**
    - **Purpose**: Loads variables from a file into the workspace.
    - **Syntax**: 
        - `load(filename)`: Loads all variables from the file filename.
        - `load(filename, variables)`: Loads only the specified variables from the file.

- **(s|f)printf**
    - **Purpose**: Formats data into a string (`sprintf`) or writes formatted data to a file or command window (`fprintf`).
    - **Syntax**: 
        - `sprintf(formatSpec, A1, ..., An)`: Formats the data according to formatSpec and returns it as a string.
        - `fprintf(formatSpec, A1, ..., An)`: Writes the formatted data to the screen or a file.
- rand
    - **Purpose**: Generates uniformly distributed random numbers.
    - **Syntax**:
        - `rand`: Returns a scalar from a uniform distribution in the interval (0,1).
        - `rand(n)`: Returns an n-by-n matrix of random numbers.
        - `rand(m,n)`: Returns an m-by-n matrix of random numbers.
- fopen
    - **Purpose**: Opens a file for reading, writing, or appending.
    - **Syntax**: 
        - `file_id = fopen(filename, mode)`: Opens the file and returns a file identifier (file_id).
    - **Modes**:
        - `r`: Read (file must exist).
        - `w`: Write (creates a new file or overwrites an existing one).
        - `a`: Append (writes to the end of the file).
    - **Example**
        ```
        fid = fopen('data.txt', 'r'); % Open file for reading
- fclose
    - **Purpose**: Closes an open file.
    - **Syntax**: 
        - `fclose(file_id)` - Closes the file associated with the file identifier file_id.
        - `fclose('all')` - Closes all open files.
    - **Note:** *Remenber to close file every time you open one!*
- randperm
    - **Purpose**: Returns a row vector containing a random permutation of integers.
    - **Syntax**: 
        - `randperm(n)`: Returns a random permutation of the integers from 1 to n.
        - `randperm(n, k)`: Returns k unique integers selected randomly from 1 to n.
### EX3
Solve the problem (3.22|3.103) using an alternative algorithm and different Matlab functions.
- what are some other functions to split strings?
    - strsplit(string)
- what are other possible function to make pick random lines?
    - randi(total_length)
- other possible process to finish this task?
    - find the line then extract the string.
    (Might be redundant)

**find the most effective method**

### EX4
- **Implement the algorithm on slide (3.11|3.92)**
    - A child couldn’t sleep, so her mother told her a story about a little frog, who couldn’t sleep, so the frog’s mother told her a story about a little bear, who couldn’t sleep, so the bear’s mother told her a story about a little weasel who fell asleep. …and the little bear fell asleep; …and the little frog fell asleep; …and the child fell asleep.
        - What is the base case here?
- **Implement the algorithm on slide (3.13|3.94)Then convert the inputs from the 's' mode into into numbers.**
    - For an automated information service a telephone company needs the digits of phone numbers to be read digit by digit. Design an algorithm allowing to rewrite an sequence of digits into words, with a space between each word, but no space at the beginning and at the end.
        - What is the base case here?

### EX5
- Manually calculate f (0,0), f (1,0), f (1,1), f (2,1), f (2,2), and f (2,3).
- Using words explain what you guess the function f is doing. (what is the base case and recursive case here?)
```

```
- Test your hypothesis by implementing it and testing it on larger inputs.

```
disp(['f(0, 0) = ', num2str(f(0, 0))]);
disp(['f(1, 0) = ', num2str(f(1, 0))]);
disp(['f(1, 1) = ', num2str(f(1, 1))]);
disp(['f(2, 1) = ', num2str(f(2, 1))]);
disp(['f(2, 2) = ', num2str(f(2, 2))]);
disp(['f(2, 3) = ', num2str(f(2, 3))]);

function result = f(x, y)   
    if y == 0
        result = 0;% Base case
    else
        result = g(f(x, y-1), x);% Recursive case
    end
end

function result = g(x, y)
    
    if y == 0
        result = x;% Base case
    else
        result = g(x, y-1) + 1; % Recursive case
    end
end
```
--------------------------------------------

### EX6
- Write a MATLAB program composed of a single command to sum up all integers from 0 to n.
```
sum = n * (n + 1) / 2;
```
- Write a simple iterative MATLAB program to sum up all integers from 0 to n.
```
n = input('Enter the value of n: ');
sum = 0;

% using sum iterate
sum = sum(0:n);

% while
while i <= n
    sum = sum + i; 
    i = i + 1;     
end

% for
for i = 0:n
    sum = sum + i; % Add each integer to sum
end

disp(sum)
```
- We now want to write a simple recursive MATLAB program to sum up all integers from 0 to n.
- What is the base case?
- What actions occur at each level of the recursion?
- Draw a simple diagram showing the recursion progress.
- Fill in the blanks.

```
function s= recsum(n) \% pay attention to the file name as this file only contain this function!
    if n == 0
        s = 0; 
    else
        s = n + recsum(n - 1); 
    end
end
```

----------------


# C2 Playbook
### 2.1.1 What is the terminal mode of MATLAB?
The terminal mode of MATLAB refers to running MATLAB without its graphical user interface (GUI), such as the desktop environment or figures. This mode allows you to execute commands and scripts directly from the terminal or command line, making it useful for automation, running batch jobs, or working on servers where a GUI is not available or needed.

**In terminal mode, MATLAB operates entirely through the command line interface (CLI), without the interactive GUI components like the MATLAB editor, variable workspace, or figure windows.**


### 2.1.3 Rewrite the code in a shorter way & Add useful comments
```
 r=1.496*10^11; 
 c=4.379*10^9;
 G=6.674*10^-11;
 T=365*24*3600;
 V=4*pi/3*(c/(2*pi))^3;
 M=4*pi^2*r^3/(G*T^2);
 M/V
```


### 2.1.4 What is the difference between clc and clearvars? How can we know that we need to use the function input()?
- `clc`: Clears the **command window**.
    It erases all text and output currently visible in the command window, but it **does not affect the workspace variables** or any of the data in memory. The history of previously executed commands is also preserved, but not displayed anymore. **Use case**: You would use `clc` to clean up the command window when it becomes cluttered with output.

- `clearvars`:Clears **variables from the workspace**.It removes the specified variables from memory, freeing up the workspace. If used without any arguments (`clearvars`), it will clear **all variables**.  **Use case**: You would use `clearvars` to free up memory or reset the workspace by removing variables you no longer need.
- `clc`: Clears the **command window** (no effect on workspace variables).
- `clearvars`: Clears **workspace variables** (no effect on command window).

- use `help` in terminal

### 2.1.6 What is the difference between an array and a matrix?  

- `Array`: A general term for a collection of data elements (numbers, characters, etc.) arranged in multiple dimensions. In programming, arrays can be 1D (vectors), 2D, 3D, or higher dimensional structures.

- `Matrix`: A specific type of array that is two-dimensional (2D). It consists of rows and columns, typically used in mathematics for linear algebra operations.

So, a matrix is always a 2D array, while an array can have any number of dimensions.

### 2.1.6 What is the conjugate of a real number?
Conjugate of a real number:
The conjugate of a real number is the number itself. This is because conjugation only affects the imaginary part of a complex number. For a real number 
𝑥
x, its conjugate is simply 
𝑥
x.
### 2.1.6 What should you test to see the difference between A' and A.'?
Difference between A' and A.' (in MATLAB/Octave):
A': This performs the complex conjugate transpose of a matrix 
𝐴
A. If 
𝐴
A is a matrix with complex numbers, it transposes the matrix and takes the complex conjugate of each element.
A.': This performs the non-conjugate transpose of 
𝐴
A, which just swaps the rows and columns of the matrix without taking the complex conjugate of any elements.
To see the difference, test on a matrix with complex elements like:
for example:
```
 A = [1 + 2i, 3 + 4i; 5 + 6i, 7 + 8i];
```
A' will conjugate the imaginary parts and then transpose the matrix.
A.' will only transpose the matrix without altering the imaginary parts.

### 2.1.6 What is the benefit of using help rather than the documentation?
- quick response
- giving out specific function based on what you want 

### 2.1.8 In MATLAB when scanning a matrix, in what order are elements read?



### 2.2.2 What does if a=3 doing?

### 2.2.2 What is the difference between A & B and A && B?

### 2.2.3 Explain when to prefer switch over if.


### 2.2.4 In the first sample code, explain the difference between lines 1 and 2.
### 2.2.4 Why is k compared to '0' between quotes and not 0'?
### 2.2.4 Why is the first script returning an error when more than one key is pressed?

### 2.3.2 What is happening with the sample code on the right?
### 2.3.2 How to interrupt a MATLAB task?
### 2.3.2 Run the code from the example with a pen and a paper.
### 2.3.2 If str2num() is replaced by str2double() is the script still working?

### 2.3.4 What does it mean for the code to be indented?
### 2.3.4 What does line 1 or the right sample code does?
### 2.3.4 what happens if line 1 of the right sample code is deleted?

### 2.3.6 How useful are the continue and break commands?
### 2.3.6 Why is it important not to abuse those commands?

### 2.3.10 What is a logical mask?
### 2.3.10 What is the result of A > 10?
### 2.3.10 What is the mod() function doing?
### 2.3.10 Given a 
5
×
5
5×5 matrix A, use the mod() function to determine the row of A(14).



----------

3.1.1 Clearly explain the difference between script and function


3.1.2

What is the "Path"?
Why is it good that functions do not create variables on the workspace?
What is happening if the function name and filename are different?

3.1.3

Clearly explain what is a "sub-function"?
Why are sub-functions very useful, and should be use as much as possible?
How to catch more than one output?

Add a task
Section 2
0 / 6 done

3.2.1 Explain in simple terms what is recursion.


3.2.2

Explain in simple terms the basic difference between iteration and recursion.
Implement he 
log
⁡
∗
log 
∗
  function in MATLAB.

3.2.3 What is happening if the we remove line 2 in the implementation?


3.2.5 Implement the algorithm in MATLAB.


3.2.7 

Implement the algorithm in MATLAB
What is the benefit of switch over if?
What is the benefit of usin a "sub-function" PrintDigit?

3.2.8

Explain why recursion can incur some memory issues?
- Each function call takes up space: When you call a function recursively, each call adds to the stack. So, if you have many recursive calls, the stack grows quickly.

- The stack has a limit: The computer’s memory for the call stack is limited. If you keep adding too many calls, the stack can run out of space, causing a stack overflow, which leads to errors or program crashes.

- Deep Recursion: When the recursion goes very deep (meaning it calls itself many, many times), you’re more likely to hit that stack limit.
Implement the generation of Fibonacci numbers using (i) recursion and (ii) recursion.
Which of (i) and (ii) is the fastest? Why?
Why is it a bad idea to start thinking of recursion using Fibonacci numbers?

Add a task
Section 3
0 / 5 done

3.3.1 Make sure to understand how each function on the slide works.


3.3.2 

What are save and load?
What is a "seed"?
What is happening if teh same seed is used to generated random numbers?
Why is the randperm function very useful?

3.3.3 

What does it mean to "print in a string"?
How to know what flags (eg. %d, %g) or special characters (eg. \n, \t) should be used?

3.3.5 

What are the dangers of not closing a file?
Why should files be opened as for "as little time as possible"?

3.3.7 Using your MATLAB knowledge of other function rewrite the code differently.