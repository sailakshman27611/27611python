#Create a Tuple: Define a tuple with elements of different data types(10, 'hello', 3.14, 'world')
tuple=(10, 'hello', 3.14, 'world')
print(tuple)
#Access Elements: Access individual elements and slices of the tuple.
for i in tuple:
    print(i)
print(tuple[1:3])
print(tuple[:-1])
#Concatenate Tuples: Combine two tuples to create a new tuple.
t2=(5,0.5)
t3=tuple+t2
print(t3)
# Tuple Unpacking
a, b, c, d = tuple
print(f"Unpacked Values: a={a}, b={b}, c={c}, d={d}")
#Membership Testing
print("Is 'hello' in tuple?", 'hello' in tuple)
#Tuple Length
print("Length of Tuple:", len(tuple))
# Using functions where applicable
numeric_tuple = (5, 10, 15)
print("Max:", max(numeric_tuple))
print("Min:", min(numeric_tuple))
print("Sum:", sum(numeric_tuple))
#Immutable Nature: Attempt to modify elements of the tuple and handle the resulting error.
tuple(3)="PI" #ERROR
