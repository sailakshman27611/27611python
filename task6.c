def write_employee_report(filename):
    employees = [
        {"name": "Alice", "department": "HR"},
        {"name": "Bob", "department": "Engineering"},
        {"name": "Charlie", "department": "Finance"}
    ]
    
    with open(filename, "w") as file:
        for employee in employees:
            line = f"Name: {employee['name']}, Department: {employee['department']}\n"
            file.write(line)
# Example usage:
write_employee_report("employee_report.txt")

output:


6.C.
 A teacher wants to save student notes in a text file, display the content, and count how many times a chosen word appears. Write a Python program for this.
Sample Input and Output:
Enter the file name: student_notes.txt
Enter student notes (press Enter on an empty line to stop):
Python is fun
I love Python
Python Python Python
Coding in Python is great

File Content:
Python is fun
I love Python
Python Python Python
Coding in Python is great

Enter the word to count: Python

The word 'Python' occurs 6 times.


PROGRAM:
def teacher_notes_word_count():
    # Step 1: Create a file and write student notes
    file_name = input("Enter the file name: ")
    with open(file_name, 'w') as file:
        print("Enter student notes (press Enter on an empty line to stop):")
        while True:
            line = input()
            if not line:
                break
            file.write(line + '\n')

    # Step 2: Display the content of the file
    print("\nFile Content:")
    with open(file_name, 'r') as file:
        content = file.read()
        print(content)

    # Step 3: Count occurrences of a chosen word
    word = input("Enter the word to count: ")
    count = content.split().count(word)
    print(f"\nThe word '{word}' occurs {count} times.")

# Run the program
teacher_notes_word_count()
