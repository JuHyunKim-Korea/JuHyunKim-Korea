"""
*** A6 Strings

*** For COMP1010 University of Utah

*** Assignment written by Juhyun Kim, u1432156
"""


# 1) Write a function that checks whether a given word or number is palindrome or not and returns True if it is palindrome and False if it is not palindrome.
def is_palindrome(word):
        """
        Convert the inputted word into lower characters.
        Check the given word
        After, if the inputted word is the same as its reverse in lowercase, return True. Otherwise, return False
        """
        if word == word[::-1]:
            return True
        else:
            return False


# 2)  write a function that computes the length of a DNA  sequence and the proportion of individual bases in the sequences
# Note that: the function must return the four values inorder of , DNA_sequence_length, base_A_proportion, base_T_proportion, base_C_proportion and base_G_proportion.
def dna_nucleotide(text):
    '''
    Convert the text into uppercases.
    After, designate the length of text to dna_length variable.
    And then, count each A,T,C,G alphabets in the dna sequence, text, and calculate the proportion within the text.
    Return the values of dna_length and the proportion value of each four alphabets.
    '''
    text = text.upper()
    dna_length = len(text)
    base_A_prop =  (text.count('A')/ dna_length) * 100
    base_T_prop = (text.count('T') / dna_length) * 100
    base_C_prop = (text.count('C') / dna_length) * 100
    base_G_prop = (text.count('G') / dna_length) * 100

    return dna_length, base_A_prop,base_T_prop,base_C_prop,base_G_prop

def main():
    '''
    Create a main function and get an input of a word to check whether it is a palindrome or not by using is_palindrome function.
    Print a new line.
    Get a DNA sequence input named txt.
    Assign the dna_length, dna_length, base_A_prop, base_T_prop, base_C_prop, base_G_prop as a global variable to the dna_nucleotide function.
    Call the dna_nucleotide function with txt input and print dna_length and each percentage of A,T,C,G, rounded up to 2 decimal point.
    '''
    word = input(" Please enter a word : ")
    if is_palindrome(word) is True:
         print(f" {word} is palindrome!")
    else:
        print(f" {word} is not palindrome!")



    print()

    txt = input(" Please enter a DNA sequence: ")
    dna_length, base_A_prop, base_T_prop, base_C_prop, base_G_prop = dna_nucleotide(txt)
    print(f" DNA sequence length = {dna_length}")
    print(f" Base A proportion = {base_A_prop:.2f}%")
    print(f" Base T proportion = {base_T_prop:.2f}%")
    print(f" Base C proportion = {base_C_prop:.2f}%")
    print(f" Base G proportion = {base_G_prop:.2f}%")


if __name__ == '__main__':
    main()
