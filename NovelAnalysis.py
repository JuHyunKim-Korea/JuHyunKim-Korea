import re, operator

# Initial code written by David Johnson, University of Utah.
'''Author of final code: [Juhyun Kim, u1432156]'''
#
#
# This section of code is fully implemented and provided for you to use.
#
#

# This function is called with a dictionary. It will return
# a list of tuples in the form (key, value) and ordered by
# the value in value. So given a
# dict = {"c":12, "a":2, "b":1}
# it will return a list
# [("b",1), ("a",2), ("c",12)]
def make_sorted_list_by_value_from_dictionary(dict):
    return sorted(dict.items(), key=operator.itemgetter(1))
'''
Define a function named make_sorted_list_by_value_from_dictionary using dict as a paramter.
Return the sorted list with both items and keys.
'''

# This function removes everything except the letters a-z from words.
# So it removes punctuation, unusual accented letters, etc.
def remove_punctuation(words):
    clean_words = []
    for word in words:
        clean_word = ''.join(char for char in word if char.isalpha())
        if clean_word:
            clean_words.append(clean_word)
    return clean_words
'''
Define a function named remove_punctuation using words as a parameter.
Create an empty list called clean_words.
Find the word in words using for loop.
Join the clean_word if the character in the word is alphabetic and append to the clean_words list.
Return the clean_words list.
'''

# This function reads the 'stop_words.txt' file and returns each word from the file in a list.
def read_common_words():
    stopWords = []
    with open('stop_words.txt','r') as file:
        for word in file:
            word = word.strip() # There are some hidden characters in the file that need to be removed
            stopWords.append(word)
    return stopWords
'''
Define a function named read_common_words.
Create an empty list named stopWords.
Open the stop_words text file and read the lines. 
If the word is found in the file, remove the hidden character and then append the word into the stopWords list.
Return the stopWords list.
'''

# Given a list of words, break the list into chunks of length chunk_size (the last chunk
# is just whatever is left over). Create a list of these chunks and return that.
# Given a list
# ['a', 'boy', 'is', 'a', 'very', 'good', 'boy']
# and a chunk_size of 2, this would return a list of chunks of length 2
# [['a', 'boy'], ['is', 'a'], ['very', 'good'], ['boy']]
# This function is implemented for you.
def break_words_into_chunks(text_words, chunk_size):
    chunk_list = []
    for index in range(0, len(text_words), chunk_size):
        chunk_list.append(text_words[index:index+chunk_size])
    return chunk_list
'''
Define a function named break_words_into_chunks using text_words and chunk_size as parameters.
Create an empty list called chunk_list.
If the index is in range from 0 to the length of text_words skipping by the chunk_size, append the chunk_list as lists of length 2.
Return the chunk_list.
'''

#
#
# This section of code needs to be implemented by you.
#
#


# Given a filename, open that file, read all the lines and return a list of all the words in the file.
# Use split() to break a line into words.
def read_all_words_in_file(filename):
    words = []
    with open(filename, 'r') as file:
        for line in file:
            words.extend(line.split())
    return words
'''
Define a function named read_all_words_in_file using filename as a parameter.
Create an empty words list and open the file and read the lines.
If the line is in the file, extend the words list with the lines splitted into words.
Return the words list.
'''

# Given a list of words, return a new list with all the words lower case. Use
# the string lower() method to make the word lower case.
def make_lowercase(words):
    return [word.lower() for word in words]
'''
Define a function named make_lowercase using words as a parameter.
Return the lowercase of the word that is in words.
'''

# This function makes a new list from book_words that has all the words in
# common_words removed. Go through the words in book_words and add it to the
# new list if the word isn't in the common_words list. Return the new list.
def remove_common_words(book_words, common_words):
    return [word for word in book_words if word not in common_words]
'''
Define a function called remove_common_words using book_words, common_words as a parameter.
Return  the new list that went through finding words in book_words and added to the new list that is not in the common_words list.
'''

# Given a list of text_words and another list of words, count how many times
# any word in text_words has a match in other_list.
# For
# text_words = ['a', 'the', 'a', 'boy']
# and
# other_list = ['a', 'the']
# this function would return 3, since 'a' appears 2 times, 'the' once, and 'boy'
# no times.
# Recall that the "in" operator is a good way of telling if a value is in a list.
def count_number_of_words_that_appear_in_another_list(text_words, other_list):
    return sum(1 for word in text_words if word in other_list)
'''
Define a function named count_number_of_words_that_appear_in_another_list using text_words and other_list as parameters.
Return the value of the count for teh words that are word in other_list.
'''

# Calculate the average length of all the words in text_words.
# Add up the length of each word and divide by the number of words.
# Return that average.
def average_word_length(text_words):
    return sum(len(word) for word in text_words) / len(text_words)
'''
Define a function named average_word_length using text_words as a parameter.
Return the result of the dividing the sum of the len of the word in text_words over length of text_words.
'''

# Make a dictionary that has words of text_words as keys and how many
# times that word appears in text_words as the value.
# Refer to the lecture slides for how to do this.
# Return the dictionary.
def calculate_word_frequency(text_words):
    frequency = {}
    for word in text_words:
        if word in frequency:
            frequency[word] += 1
        else:
            frequency[word] = 1
    return frequency
'''
Create an empty dictionary named frequency.
Using for loop, find word in text_words and if it is in frequency dictionary, add the number of the vaue and if not, go over to the else statement. 
Return the frequency dictionary that went through the for loop.
'''


# Count the words in word_list that appear in positive_words, then count the
# words in word_list that appear in negative words.
# Turn each count into a percentage by dividing by the length of word_list and then
# multiply by 100.
# Return the difference between the positive percentage and the negative percentage rounded
# to 2 decimal places. The code for rounding is provided.
# A positive returned number means there were more positive than negative words.
# As an example, if
# word_list = ['a', 'sad', 'boy', 'is', 'an', 'excellent', 'good', 'boy']
# positive_words = ['excellent', 'good']
# negative_words = ['sad']
# The positive count would be 2 (for excellent and good)
# The negative count would be 1 (for sad)
# The positive percentage would be 2/8 * 100 = 25
# the negative percentage would be 1/8 * 100 = 12.5
# The returned value would be 25 - 12.5 = 12.50.
# You should use the count_number_of_words_that_appear_in_another_list function to do the counting.
def calculate_sentiment( word_list, positive_words, negative_words):
    positive_count = count_number_of_words_that_appear_in_another_list(word_list, positive_words)
    negative_count = count_number_of_words_that_appear_in_another_list(word_list, negative_words)
    positive_percent = (positive_count / len(word_list)) * 100
    negative_percent = (negative_count / len(word_list)) * 100

    return round(positive_percent - negative_percent, 2)
'''
Define a function named calculate_sentiment that uses word_list, positive_words and negative_words as parameters.
Call the count_number_of_words_that_appear_in_another_list function using word_list and positive_words to count positive word counts.
Apply the same for negative_count.
Calculate the percentage of positive words and negative words in the text.
Return the value of difference of positive_percent and negative_percent and round up to 2 decimal places.
'''


# This code runs when the file is executed and is fully implemented.
def main():

    # Read in the positive and negative words for later use.
    positive_words = read_all_words_in_file("positive.txt")
    negative_words = read_all_words_in_file("negative.txt")
    '''
    Read the positive and negative words from the files.
    '''

    # Analyze the following files. You may want to comment out all files but 1 when testing.
    files = ["HuckFinn.txt", "TheScarletLetter.txt", "Plato.txt", "TaleOfTwoCities.txt"]
    '''
    Use the provided text files to run the code.
    '''


    # Loop over all the files
    for file in files:
        # Report on which file is being analyzed
        print("\n\nAnalyzing:", file)
    '''
    Loop over the files and report on which file is being analyzed in what sections.
    '''

        # get the words from the text and clean them up
        print("Getting words from book")
        book_words = read_all_words_in_file(file)
        book_words = make_lowercase(book_words)
        book_words = remove_punctuation(book_words)
        print("    ", len(book_words), " words found")
        '''
        Print out the words, make it lowercase, remove punctuation, and print the words that are founded.
        '''

        # Remove common words
        common_words = read_common_words()
        print("Removing common words")
        book_words = remove_common_words(book_words, common_words)
        print("    ", len(book_words), " words remaining")
        '''
        Remove the common words and print the remaining words.
        '''

        # Break the list of words into 20 chunks
        chunks = break_words_into_chunks(book_words, len(book_words)//20 + 1)

        # Look at overall and chunk sentiment
        print("Calculating Sentiment")
        print("    Overall:", calculate_sentiment(book_words, positive_words, negative_words))
        print("    Chunk Sentiment: ", end='')
        for chunk in chunks:
            print(calculate_sentiment(chunk, positive_words, negative_words), end=' ')
        print()
        '''
        Break the list of words into 20 chuncks and use the calculate_sentiment function to look at the overall and chunk sentiment.
        '''

        # Find the average word length
        print("Average word length:", round(average_word_length(book_words),1))

        # Count up the most common words and report on the top 10.
        print("Counting most common words")
        word_frequencies = calculate_word_frequency(book_words)
        word_frequency_list = make_sorted_list_by_value_from_dictionary(word_frequencies)
        word_frequency_list.reverse()
        print("    Most common words:", word_frequency_list[:10])
        '''
        Find the average word length and use functions to find out the TOP 10 most commonly used words in the text, along with the times they have been used.
        '''

# This runs if the file is executed and doesn't if the file is imported
if __name__ == '__main__':
    main()
