import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

# Load real-world iris dataset
df = sns.load_dataset('iris')

# Display first 5 rows
print("\nFirst 5 rows:")
print(df.head())

# Dataset information
print("\nDataset Information:")
print(df.info())

# Summary statistics
print("\nSummary Statistics:")
print(df.describe())

# Check missing values
print("\nMissing Values:")
print(df.isnull().sum())

# Check total missing values
print("\nTotal Missing Values:")
print(df.isnull().sum().sum())

# Correlation matrix
correlation = df.select_dtypes(include="number").corr()

print("\nCorrelation Matrix:")
print(correlation)

# Plot correlation heatmap
plt.figure(figsize=(8, 6))
sns.heatmap(correlation, annot=True, cmap="coolwarm")
plt.title("Correlation Heatmap")
plt.show()
