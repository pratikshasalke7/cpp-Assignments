import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

# 1. Line Plot: Monthly Sales by Region
data_sales = {
    "month": ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jan", "Feb", "Mar", "Apr", "May", "Jun"],
    "sales": [22, 25, 24, 28, 31, 30, 18, 20, 23, 21, 26, 27],
    "region": ["North", "North", "North", "North", "North", "North", "South", "South", "South", "South", "South", "South"]
}
df = pd.DataFrame(data_sales)
print(df)

sns.lineplot(
    data=df,
    x="month",
    y="sales",
    hue="region"
)
plt.xlabel("Month")
plt.ylabel("Sales")
plt.title("Monthly Sales by Region")
plt.show()


# 2. Scatter Plot: Study Hours vs Score
data_student = {
    "hours_studied": [1, 2, 3, 4, 5, 2, 3, 4, 5, 6],
    "score": [42, 55, 60, 74, 88, 50, 65, 70, 82, 90],
    "gender": ["Male", "Female", "Male", "Female", "Female", "Male", "Female", "Male", "Male", "Female"],
    "attendance": [70, 75, 80, 85, 95, 72, 82, 88, 92, 98]
}
df_student = pd.DataFrame(data_student)
print(df_student)

sns.scatterplot(
    data=df_student,
    x="hours_studied",
    y="score",
    hue="gender",
    size="attendance",
    style="gender"
)
plt.xlabel("Study Hours")
plt.ylabel("Score")
plt.title("Study Hours vs Score")
plt.show()


# 3. Histogram: Distribution of Exam Scores
data_scores = {
    "score": [
        52, 55, 58, 61, 63, 65, 67, 68, 69, 71, 79, 81, 83, 84, 85, 86, 87, 88, 89, 91, 93, 95
    ]
}
df_scores = pd.DataFrame(data_scores)
print(df_scores)

sns.histplot(
    data=df_scores,
    x="score",
    bins=5,
    kde=True,
    color="orange"
)
plt.xlabel("Score")
plt.ylabel("Number of Students")
plt.title("Distribution of Exam Scores")
plt.show()


# 4. Box Plot: Score Spread by Department
data_dept = {
    "dept": [
        "CS", "CS", "CS",
        "ECE", "ECE", "ECE",
        "Mech", "Mech", "Mech",
        "Civil", "Civil", "Civil"
    ],
    "score": [
        82, 85, 86,
        75, 78, 80,
        70, 72, 74,
        78, 80, 81
    ]
}
df_dept = pd.DataFrame(data_dept)
print(df_dept)

sns.boxplot(
    data=df_dept,
    x="dept",
    y="score"
)
plt.xlabel("Department")
plt.ylabel("Score")
plt.title("Score Spread by Department")
plt.show()
