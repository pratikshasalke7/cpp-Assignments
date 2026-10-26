import numpy as np

# Define matrix A
A = np.array([[2, 1],
              [1, 3]])

# Define vector B
B = np.array([5, 6])

print("Matrix A:")
print(A)

print("\nVector B:")
print(B)

# 1. Solve matrix equation AX = B
X = np.linalg.solve(A, B)

print("\nSolution of AX = B:")
print(X)

# 2. Find inverse of A
inv_A = np.linalg.inv(A)

print("\nInverse of A:")
print(inv_A)

# 3. Find transpose of A
A_transpose = A.T

print("\nTranspose of A:")
print(A_transpose)

# 4. Find eigenvalues and eigenvectors
eigenvalues, eigenvectors = np.linalg.eig(A)

print("\nEigenvalues:")
print(eigenvalues)

print("\nEigenvectors:")
print(eigenvectors)
