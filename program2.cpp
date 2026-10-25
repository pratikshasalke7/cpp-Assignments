import numpy as np

# 1. np.array()
print("--- np.array() ---")
arr = np.array([1, 2, 3, 4, 5])
print(arr)

# 2. np.arange()
print("\n--- np.arange() ---")
arr = np.arange(1, 7)
print(arr)

# 3. np.linspace()
print("\n--- np.linspace() ---")
arr = np.linspace(1, 10, 5)
print(arr)

# 4. Reshape
print("\n--- reshape() ---")
arr = np.arange(1, 7)
reshaped = arr.reshape(2, 3)
print(reshaped)

# 5. Indexing
print("\n--- Indexing ---")
arr = np.array([10, 20, 30, 40, 50])
print(arr[2])

# 6. 2D Indexing
print("\n--- 2D Indexing ---")
arr = np.array([[1, 2, 3],
                [4, 5, 6]])
print(arr[1, 2])

# 7. Slicing
print("\n--- Slicing ---")
arr = np.array([10, 20, 30, 40, 50])
print(arr[1:4])

# 8. 2D Slicing
print("\n--- 2D Slicing ---")
arr = np.array([[1, 2, 3],
                [4, 5, 6]])
print(arr[:, 1:3])

# 9. np.sum()
print("\n--- np.sum() ---")
arr = np.array([10, 20, 30, 40, 50])
print(np.sum(arr))

# 10. np.mean()
print("\n--- np.mean() ---")
arr = np.array([10, 20, 30, 40, 50])
print(np.mean(arr))
