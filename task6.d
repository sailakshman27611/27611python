import csv

# Read CSV file
file_name = input("Enter CSV file name: ")
records = []

with open(file_name, 'r') as file:
    reader = csv.reader(file)
    next(reader)  # Skip header
    for row in reader:
        records.append(row)

# Display all records
print("\nStudent Records:")
for r in records:
    print(f"Id: {r[0]}, Name: {r[1]}, Grade: {r[2]}, Attendance: {r[3]}")

# Calculate average attendance
total = sum(int(r[3]) for r in records)
average = total / len(records)
print(f"\nAverage Attendance: {average:.2f}")
