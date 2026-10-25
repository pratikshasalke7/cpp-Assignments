# assignment 7
# Line plot
import matplotlib.pyplot as plt

months = ["Jan", "Feb", "Mar", "Apr", "May"]
sales = [20, 35, 30, 45, 50]
plt.plot(months, sales)
plt.xlabel("Months")
plt.ylabel("Sales")
plt.title("Monthly Sales")
plt.show()

# Bar plot
subjects = ["Math", "Python", "DS", "OOP", "OS"]
marks = [80, 90, 75, 85, 70]
plt.bar(subjects, marks)
plt.xlabel("Subjects")
plt.ylabel("Marks")
plt.title("Subject-wise Marks")
plt.show()

# Scatter plot
hours = [1, 2, 3, 4, 5, 6]
marks = [40, 45, 55, 65, 75, 85]
plt.scatter(hours, marks)
plt.xlabel("Study Hours")
plt.ylabel("Marks")
plt.title("Study Hours vs Marks")
plt.show()

# Histogram
marks = [
    45,
    50,
    52,
    55,
    60,
    62,
    65,
    68,
    70,
    72,
    75,
    78,
    80,
    82,
    85,
    88,
    90,
    92,
    95,
]
plt.hist(marks, bins=5)
plt.xlabel("Marks")
plt.ylabel("Number of Students")
plt.title("Distribution of Marks")
plt.show()
