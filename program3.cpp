import numpy as np
#vectorized arithmetic
a=np.array([1,2,3,4])
b=np.array([10,20,30,40])
print(np.add(a,b))
print(np.sqrt(a))
print(np.exp(a))
#broadcasting:(3,4)matrix+(4,) vector
matrix=np.arange(12).reshape(3,4)
row_vector=np.array([1,0,1,0])
print(matrix+row_vector)
#vector applied to every row
