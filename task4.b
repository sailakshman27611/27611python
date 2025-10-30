# Input list of integers
numbers = [1, 2, 3, 4, 5, 6]

# List comprehension to get squares of even numbers
even_squares = [x**2 for x in numbers if x % 2 == 0]

# List comprehension with formatted descriptions
descriptions = [f"Square of {x} is {x**2}" for x in numbers if x % 2 == 0]

# Display the results
print("Even Squares:", even_squares)
print("Descriptions:", descriptions)
