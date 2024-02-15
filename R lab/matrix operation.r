# Create matrices A and B
A <- matrix (1:9, nrow = 3)
B <- matrix (9:1, nrow = 3)
# Display matrices A and B
cat ("Matrix A:\n")
print(A)
cat ("\nMatrix B:\n")
print(B)
# a) Transpose of the matrix
transpose_A <- t(A)
transpose_B <- t(B)
cat ("\nTranspose of Matrix A:\n")
print(transpose_A)
cat ("\nTranspose of Matrix B:\n")
print(transpose_B)
# b) Addition
addition_result <- A + B
cat ("\nAddition of Matrix A and Matrix B:\n")
print(addition_result)
# c) Subtraction
subtraction_result <- A - B
cat ("\nSubtraction of Matrix A and Matrix B:\n")
print(subtraction_result)
# d) Multiplication
multiplication_result <- A %*% B # Matrix multiplication
cat ("\nMultiplication of Matrix A and Matrix B:\n")
print(multiplication_result)
4)Develop a program to find the factorial of given number using recursive function calls
# Recursive function to calculate factorial
factorial <- function(n) {
 if (n == 0 || n == 1) {
 return (1)
 } else {
 return (n * factorial (n - 1))
 }
}
# Input: Get a number from the user
num <- as. integer (readline ("Enter a non-negative integer to find its factorial: "))
# Check if the input is a non-negative integer
if (num < 0) {
 cat ("Please enter a non-negative integer.\n")
} else {
 # Call the recursive function to calculate factorial
 result <- factorial(num)

 # Display the result
 cat ("Factorial of", num, "is:", result, "\n")
}
