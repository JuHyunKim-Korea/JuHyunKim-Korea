# COMP 1010 [Assignment 7: average word length] of sentence Written by Juhyun Kim, u1432156

# Add the functions for the assignment below here and above main.
def calculate_name_numeric_value (person_name):
    from string import ascii_lowercase
    person_name = person_name.lower()
    letters_in_value = {}
    numeric_value = 0
    for letter in person_name:
        letters_in_value[letter] = ord(letter) - 96
    numeric_value = sum(letters_in_value[letter] for letter in person_name)

    return numeric_value, letters_in_value
'''
Define a function named calculate_name_numeric_value using person_name as a parameter.
Import ascii_lowercase from string library
Convert the person_name input into lowercases
Define a dictionary called letters_in_value
Create a loop where the letter is included in the person_name and assign an ascii value to the according lowercase letter
Then, numeric_value will store the sum of the values
'''

def main():
    person_name = input('Enter Name: ')
    numeric_value, letters_in_value = calculate_name_numeric_value(person_name)
    print(f'Values of the letters of name {person_name} = {letters_in_value}')
    print(f'The Name {person_name} has numeric value = {numeric_value}')
'''
Get a name input from the user
numeric_value and letters_in_value dictionary will be a variable used in the calculate_name_numeric_value(person_name) function with person_name used as a parameter
Print the two following lines
'''

# Keep these lines. It helps Python run the program correctly by calling the main function when the program is run.
if __name__ == "__main__":
    main()
