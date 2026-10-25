import matplotlib.pyplot as plt
import numpy as np

# Data preparation
x = np.linspace(0, 2 * np.pi, 100)
y1 = np.sin(x)
y2 = np.cos(x)

# 1. Two functions on one plot
plt.figure(figsize=(8, 4))
plt.plot(x, y1, color="royalblue", linewidth=2, label="sin(x)")
plt.plot(x, y2, color="crimson", linestyle="--", label="cos(x)")
plt.title("two functions on one plot", fontsize=14, fontweight="bold")
plt.xlabel("x value")
plt.ylabel("y value")
plt.legend(loc="upper right")
plt.grid(True, linestyle=":", alpha=0.7)
plt.tight_layout()
plt.show()

# 2. Subplots grid (2x2)
fig, axes = plt.subplots(2, 2, figsize=(9, 6), sharex=True)
axes[0, 0].plot(x, y1, label="sine")
axes[0, 0].legend()
axes[0, 1].plot(x, y2, color="orange", label="cosine")
axes[0, 1].legend()
axes[1, 0].scatter(x[::5], y1[::5], color="green", label="samples")
axes[1, 0].legend()
axes[1, 1].plot(x, y1 + y2, color="purple", label="sin(x)+cos(x)")
axes[1, 1].legend()
plt.show()

# 3. Gridspec Layout
fig = plt.figure(figsize=(10, 6), layout="constrained")
grid = fig.add_gridspec(2, 3)

ax_main = fig.add_subplot(grid[:, :2])
ax_top = fig.add_subplot(grid[0, 2])
ax_bottom = fig.add_subplot(grid[1, 2])

ax_main.plot(x, y1, label="sin(x)", linewidth=2)
ax_main.plot(x, y2, label="cos(x)", linewidth=2)
ax_main.set(title="Main Comparison", xlabel="x", ylabel="Value")
ax_main.legend(ncol=2, loc="lower left")
ax_main.grid(True, alpha=0.3)

ax_top.hist(y1, bins=12, color="steelblue")
ax_top.set_title("Sine Distribution")
ax_top.grid(True, axis="y", alpha=0.3)

ax_bottom.scatter(y1, y2, color="teal", s=18)
ax_bottom.set_title("Sine vs Cosine")
ax_bottom.grid(True, alpha=0.3)
plt.show()

# 4. Styled Subplots with rcParams
plt.rcParams.update({
    "font.size": 11,
    "axes.titleweight": "bold",
    "axes.grid": True,
    "grid.alpha": 0.3,
})

fig, axes = plt.subplots(1, 2, figsize=(9, 4), layout="constrained")
for ax, data, name, color in zip(
    axes, [y1, y2], ["Sine", "Cosine"], ["#1f77b4", "#d62728"]
):
  ax.plot(x, data, color=color, marker="o", markevery=10, label=name)
  ax.set(title=f"Styled {name}", xlabel="x", ylabel="Value")
  ax.legend(frameon=False)
plt.show()
