import numpy as np
np.random.seed(42)
uniform = np.random.rand(5)
normal = np.random.randn(1000)
ints = np.random.randint(1,7,10)
print('Mean :', np.mean(normal))
print('Std dev:', np.std(normal))
print('Var :', np.var(normal))
print('Median :', np.median(normal))
