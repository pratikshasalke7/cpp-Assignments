import pandas as pd

# 1. Read CSV and display the first few rows
df = pd.read_csv(r'C:\Users\CC\Documents\score.csv')
print(df.head())

# 2. Check for null values
print(df.isnull())

# 3. Fill null values with 89
print(df.fillna(89))

# 4. Drop rows with any null values
print(df.dropna())

# 5. Filtering and selecting specific columns
print(df[df['score'] > 80])
print(df[['name', 'score']])

# 6. Sort values by score in descending order
print(df.sort_values('score', ascending=False))

# 7. Group by department and find mean score
print(df.groupby('department')['score'].mean())

# 8. Drop rows where 'name' has null values
print(df.dropna(subset=['name']))

# 9. Drop duplicate rows
print(df.drop_duplicates())

# 10. Rename 'score' column to 'marks'
print(df.rename(columns={'score': 'marks'}))

# 11. Group by department with aggregate functions (mean and max)
print(df.groupby('department').agg({'score': ['mean', 'max']}))

# 12. Sort by multiple columns (department ascending, score descending)
print(df.sort_values(['department', 'score'], ascending=[True, False]))
