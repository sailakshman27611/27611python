# Program to calculate the distance between two 3D points

import math

# Take coordinates of the first point
x1 = float(input("Enter x1: "))
y1 = float(input("Enter y1: "))
z1 = float(input("Enter z1: "))

# Take coordinates of the second point
x2 = float(input("Enter x2: "))
y2 = float(input("Enter y2: "))
z2 = float(input("Enter z2: "))

# Calculate the distance using the distance formula
distance = math.sqrt((x2 - x1)**2 + (y2 - y1)**2 + (z2 - z1)**2)

# Display the result
print(f"The distance between the two points is: {distance:.2f}")
