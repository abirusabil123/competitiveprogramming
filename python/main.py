import math
import numpy as np
import matplotlib.pyplot as plt

startingPropaganda = 5
numberOfValues = 1000000

def propagandaEffectiveness(x):
    return math.exp(x) * (startingPropaganda - x)

def guidanceEffectiveness(x):
    p = propagandaEffectiveness(x)
    if p == 0:
        return float('inf')
    return (startingPropaganda*60) / p

# Generate x values from 0 to 5
x_vals = np.linspace(0, 5, numberOfValues)

# Calculate y values
y_prop = [propagandaEffectiveness(x) for x in x_vals]
y_guid = [guidanceEffectiveness(x) for x in x_vals]

# Plot
plt.figure()
plt.plot(x_vals, y_prop, color='red', linewidth=2, label='Propaganda effectiveness')
plt.plot(x_vals, y_guid, color='green', linewidth=2, label='Guidance effectiveness')
plt.gca().get_yaxis().get_major_formatter().set_scientific(False)

# Change x-axis to show percentage
plt.xlabel("Percentage of truth (%)", fontsize=12)
plt.ylabel("Effectiveness (%)", fontsize=12)
plt.title("Propaganda vs Guidance effectiveness based on percentage of truth", fontsize=14)
plt.grid(True, alpha=0.3)

# Limit y-axis so the inverse curve doesn't explode
plt.ylim(0, 100)

plt.legend()

# Add percentage sign to x-axis ticks
plt.gca().set_xticks([0, 1, 2, 3, 4, 5])
plt.gca().set_xticklabels(['0%', '20%', '40%', '60%', '80%', '100%'])

# Save as SVG
plt.savefig("propagandaEffectiveness.svg", format="svg")
print("Plot saved as 'propagandaEffectiveness.svg'")

# Show the plot
plt.show()