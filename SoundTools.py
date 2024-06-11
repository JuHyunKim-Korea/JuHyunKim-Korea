import random

# Functions to process audio.
'''For COMP1010, written by [Juhyun Kim, u1432156].'''

# You may not use a Python list comprehension in any of the following problems. If
# you don't know what that is, we will learn it eventually. If you do know,
# stick to using loops to solve the following problems.

# 1. Write a function to make a new list with the elements in reversed order.
# If original_samples is [1,2,3], then this should return a new_list [3,2,1].
# You may not use the Python reversed function, or original_samples[::-1].
# Loop over the items in the list and build up a new list in the desired order.
# This function has been started for you.
def make_reversed_samples(original_samples):
    new_samples = []
    for i in range(len(original_samples)-1,-1,-1):
        new_samples.append(original_samples[i])
    return new_samples
'''
Make a function called make_reversed_samples using original samples as a parameter.
Define an empyty list named new_samples
Add the original samples's elements to the new_samples list in reversed order.
Return the new_samples.
'''
# 2. Write a function to make a new list with each element of the old list
# multiplied by volume. This will have the effect of making the sound louder.
# If original_samples is [1,2,3] and volume is 2, then this should return a new list
# [2,4,6]. You must use a loop to get the elements in the original list and build
# up a new list in that loop. Return the new list.
def make_louder_samples(original_samples, volume):
    multiple_samples = []
    for sample in original_samples:
        multiple_samples.append(sample * volume)

    return multiple_samples
'''
Make a function called make_louder_samples using original_samples and volume as parameters.
Define an empyty list named multiple_samples.
Create a loop that appends the multiplied elements, multiplying sample and volume when the sample is in the original_samples.
Return the multiple_samples.
'''

# 3. Write a function to make a new list made up of every nth element in the
# original list. When saving sound on a computer we can choose how many samples
# to save. More samples means higher quality. The function will shrink the number
# of samples but also reduce the quality.
# If the original list is [1,2,3,4,5,6,7,8] and skip is 3, the new list should be
# [1,4,7].
# You may not use original_list[::skip], you must use a loop to find the desired
# elements and build up a new list. As a hint, this is a problem best solved
# using a loop over the index numbers of the list rather than the elements of the
# list.  Return the new list.
def make_reduced_samples(original_samples, skip):
    reduced_samples = []
    for i in range(0, len(original_samples), skip):
        reduced_samples.append(original_samples[i])

    return reduced_samples
'''
Make a function called make_reduced_samples using original_samples and skip parameters.
Define an empty list named reduced_samples
Create a loop that skips some of the elements from the length of the original_samples and add the according element to the reduced_samples.
Return the reduced_samples.
'''

# 4. Write a function to make a new list made up of every element in the
# original list with the value of new elements set to be within a certain range.
# If an element is greater than clip_level, then the element should be set to clip_level.
# If an element is less than -clip_level, then the element should be set to -clip_level.
# This means that all the new element values should be -clip_level <= value <= clip_level.
# For example, if original_samples is [-5, -1, 2, 5, 10] and clip_level is 4, then
# the new list would be [-4, -1, 2, 4, 4] (-5 5 and 10 were clipped to the allowed range.
# As a hint, use if statements to see if a value is to high or too low.
# Return the new list.
# Clipping happens in sound when recording equipment cannot capture the full range
# of volume the sound makes. The loudest sound gets clipped, or set to that maximum
# volume. This function makes the original sound become clipped to an artificially low
# level.
def make_clipped_samples(original_samples, clip_level):
    clipped_samples = []
    for sample in original_samples:
        if sample > clip_level:
            clipped_samples.append(clip_level)
        elif sample < clip_level:
            clipped_samples.append(-clip_level)
        else:
            clipped_samples.append(sample)

    return clipped_samples
'''
Make a function called make_clipped_samples using original_samples and clip_level as parameters.
Define an empty list named clipped_samples.
Create a loop to check when the sample is included in the original_samples, if the sample is bigger than the clip_level, append the clip_level to the clipped_samples.
If the sample is smaller than clip_level, append the -clip_level to the clipped_samples. 
For other cases, append sample to the clipped_samples.
Return the clipped_samples.
'''

# 5. Write a function to make a new list made up of every element in the original list
# with some noise added to each value. To each element add a random int that can go
# from -noise_level to noise_level. Use a loop to access each element in the
# original list and then add this noise value to it and add it to the new list.
# As an example, if the original list is [10,20,30] and noise_level is 2, then a
# new_list might be [8, 21, 29] if the random ints picked happened to be -2, 1, -1.
# Return the new list.
# Noise is typically small rapid changes to the audio. Adding a small random
# value mimics real noise.
def make_noisy_samples(original_samples, noise_level):
    noisy_samples =[]
    for sample in original_samples:
        noise = random.randint(-noise_level, noise_level)
        noisy_samples.append(sample + noise)

    return noisy_samples
'''
Make a function called make_noisy_samples using original_samples and noise_level as parameters.
Define an empty list named noisy_samples.
Create a loop to add random integer numbers to noise that range from -noise_level to noise_level.
Add the sample number + noise number element to the noisy_samples list.
Return the noisy_samples.
'''

# 6. Write a function to make a tone. A tone is a repeating pattern of sample
# values. You are to make what is called a sawtooth pattern. A music synthesizer
# is basically doing the same thing as this but with a wider variety of patterns.
# There is not original_samples list. You are to make and return a list with the
# following structure.
# Each "sawtooth" should be values going from -10000 to 10000 counting by 1000. So
# the elements should go -10000, -9000, -8000, -7000, -6000, -5000, -4000, -3000, -2000, -1000, 0, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000.
# Then, there should be 1000 sawtooths - the above pattern should repeat 1000 times.
# This should all be in a single list.
# You must use loops to make the sawtooth and the copies of the sawtooth. You
# may not write out by hand the needed elements or use loop multiplication to make copies.
def make_tone():
    tone_samples = []
    for i in range(-10000, 10001, 1000):
        tone_samples.append(i)

    return tone_samples
'''
Make a function called make_tone.
Define an empty list named tone_samples.
Add the elements by skipping the numbers by 1000 from -10000 to 10000 and append the according numbers to the tone_samples list.
Return the tone_samples.
'''

# You can add small test examples here and see results from running this file instead
# of the SoundApp. An example of testing the reversed_samples function is shown.
if __name__ == "__main__":
    sample_list = [1,2,3,4,5,6,7,8]

    print("Original:", sample_list, "Reversed:", make_reversed_samples(sample_list))

    volume = int(input('Enter a volume: '))
    print("Original:", sample_list, "Multiplied:", make_louder_samples(sample_list, volume))

    skip = int(input('Enter a skip number: '))
    print("Original:", sample_list, "Reduced:", make_reduced_samples(sample_list, skip))

    clip_level = int(input('Enter a clip level: '))
    print("Original:", sample_list, "Clipped", make_clipped_samples(sample_list, clip_level))

    noise_level = int(input('Enter a noise level: '))
    print("Original:", sample_list, "Noisy", make_noisy_samples(sample_list, noise_level))

    print("Tone: ", make_tone())
'''
Define a sample list and get the inputs that are needed to run the code.
After, brimg the sample_list and use the sample_list and inputs to use as the functions' parameters.
Call every functions and print them.
'''

