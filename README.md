# Decision-Making-statements
Aim:
To study and implement C++ decision making statements

Theory:
If-else:An if-else statement is a fundamental control flow structure in programming that allows you to execute different code blocks based on whether a specified condition is true or false.

Switch-case:A switch case statement is a control flow structure that allows you to execute different code blocks based on the value of an expression. It's often used as an alternative to multiple if-else statements when you have several possible values for an expression and you want to perform different actions for each value.

### Algorithm (For a Basic Calculator):

1. **Start**

2. **Declare Variables**:
   - `choice`: Integer to store the user's selection of operation.
   - `a`, `b`: Integers to hold the two numbers for calculation.
   - `x`, `y`, `z`, `q`: Integers to store results of different operations.

3. **Display Menu**:
   - Print the options for addition, subtraction, multiplication, and division.

4. **Read User Choice**:
   - Input the user's choice and store it in the variable `choice`.
   - Input two numbers: prompt the user to enter the first number and store it in `a`, then prompt for the second number and store it in `b`.

5. **Perform Operation Based on Choice**:
   - Use a switch statement to determine the operation based on `choice`:
     - **Case 1 (Addition)**: Compute `x = a + b` and display the result.
     - **Case 2 (Subtraction)**: Compute `y = a - b` and display the result.
     - **Case 3 (Multiplication)**: Compute `z = a * b` and display the result.
     - **Case 4 (Division)**: Check if `b` is zero. If it is, display a "Divide by zero error" message. Otherwise, compute `q = a / b` and display the result.

6. **Default Case**:
   - Display an error message if the input choice is invalid.

7. **End**
