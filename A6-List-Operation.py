# COMP 1010 [Assignment 6: Average word length] of sentence Written by Juhyun Kim, u1432156

# Add the functions for the assignment below here and above main.
def count_words(sentence):
    return len(sentence.split())
    '''
    Create a function named count_words that uses the variable sentence
    Return the length of the sentence that has been splitted by whitespace
    '''

def calculate_average_word_length(sentence):
    words = sentence.split()
    total_length = sum(len(word) for word in words)
    ave_word_length = total_length / len(words)
    return ave_word_length
    '''
    Store the result of the splitted sentence into a variable called words
    Create a variable called total_length that adds all the length of each words
    Divide total_length by length of the splitted sentence, which is words, and store it into a new variable called ave_word_length
    Return the value of the ave_word_length variable
    '''


# Keep this main function
def main():
    sentence = input('Give me a sentence: ')
    num_of_word = count_words(sentence)
    print(f'Number of words in the sentence: {num_of_word}')

    ave_word_length = calculate_average_word_length(sentence)
    print(f'Average word length: {ave_word_length:.2f}')
    '''
    Take a sentence input from the user.
    After, by calling the count_words function using variable sentence, store the returned value into a variable called num_of_word
    Print the number of words in the sentence.
    Again, by calling calculate_average_word_length function using variable sentence, store the returned value into a variable called ave_word_length
    Print the average word length by the second decimal number
    '''

# Keep these lines. It helps Python run the program correctly by calling the main function when the program is run.
if __name__ == "__main__":
    main()

