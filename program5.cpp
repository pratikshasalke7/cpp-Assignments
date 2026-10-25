import pandas as pd
# Create Series
s = pd.Series([10, 20, 30, 40, 50])
print("Series:")
print(s)
# Create DataFrame
data = {
 "Name": ["Pranita", "Anjali", "Vedika", "Samiksha"],
 "Age": [19, 20, 19, 20],
 "Marks": [85, 90, 78, 88]
}
df = pd.DataFrame(data)
print("\nDataFrame:")
print(df)
# Display first rows
print("\nFirst rows:")
print(df.head())
# Display last rows
print("\nLast rows:")
print(df.tail())
# Statistical description
print("\nDescription:")
print(df.describe())
# Export DataFrame to CSV
df.to_csv("students.csv", index=False)
print("\nCSV file created successfully.")
# Import CSV file
df1 = pd.read_csv("students.csv")
print("\nImported CSV data:")
print(df1)
