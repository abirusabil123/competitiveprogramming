import math
import numpy as np
import matplotlib.pyplot as plt

def propogandaEffectiveness(x):
    return x * math.exp(x/10.0) * (100 - x) / 80000

# Generate x values from 0 to 100
x_vals = np.linspace(0, 100, 1000000)

# Calculate y values
y_vals = [propogandaEffectiveness(x) for x in x_vals]

# Plot
plt.figure()
plt.plot(x_vals, y_vals, linewidth=2, label='Propaganda effectiveness')
plt.gca().get_yaxis().get_major_formatter().set_scientific(False)

# Change x-axis to show percentage
plt.xlabel("Percentage of truth (%)", fontsize=12)  # Changed label
plt.ylabel("Propoganda Effectiveness", fontsize=12)  # Changed label for clarity
plt.title("Propaganda effectiveness based on percentage of truth", fontsize=14)
plt.grid(True, alpha=0.3)
plt.legend()

# Add percentage sign to x-axis ticks
plt.gca().set_xticks([0, 20, 40, 60, 80, 100])
plt.gca().set_xticklabels(['0%', '20%', '40%', '60%', '80%', '100%'])

# Save as SVG
plt.savefig("propagandaEffectiveness.svg", format="svg")
print("Plot saved as 'propagandaEffectiveness.svg'")

# Show the plot
plt.show()