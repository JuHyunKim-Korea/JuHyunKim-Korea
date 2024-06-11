'''
Do some simple image processing
# Assignment written by: [Juhyun Kim, u1432156]
'''

# This brings in functions from the graphics.py file
from graphics import *
# We will need some random numbers
from random import randrange

# This function makes a new image that has the red values of the original image but sets the
# green and blue parts to zero. A pure green or blue color in the original will look black
# the new image since those colors get set to 0.
#
# Study the pattern of the loop inside a loop (called nested loops). Each time the first loop
# does a single repeat, the entire inner loop does all its repetitions.
#
# Look how to get the color at a pixel, change the color, and set the pixel to the new color.
# The assignment problems below will use these steps.
def red_part_of_an_image(image):s
    red_image = image.clone() # copy the image
    # go across the image with the for x loop and then move down a row
    for y in range(0,image.getHeight()):
        for x in range(0,image.getWidth()):
            color = image.getPixel(x,y)
            red_color = color[0]
            new_color = [red_color, 0, 0]
            red_image.setPixel(x,y, new_color)
    return red_image
'''
Define a function named red_part_of_an_image using image as a parameter.
Copy the original image and name it red_image
Make a loop that goes over all the pixels in width and height, and then change the pixels into all red color.
Set the pixels into a newly distributed color number.
Return the red_image.
'''

# Question 1, Make a function that sets every pixel of a new image to the average
# of the red, green, and blue parts of the pixel at the same location in the
# original. The average is summing them up and dividing by 3. This is one way
# to convert a color image to a grey (black-and-white) image.
# // means integer division, which produces an int for a result, like 5 // 2 is 2.
# Look at the above function for the basic structure you should follow.
def color_image_to_grey_scale(image):
    grey_scale_image = image.clone()

    for y in range(0, image.getHeight()):
        for x in range(0, image.getWidth()):
            color = image.getPixel(x, y)
            avg_color = (color[0] + color[1] + color[2]) // 3
            grey_color = [avg_color, avg_color, avg_color]
            grey_scale_image.setPixel(x, y, grey_color)
    return grey_scale_image
'''
Define a function named color_image_to_grey_scale using image as a parameter.
Copy the original image and name grey_scale_image
Make a loop that goes over all the pixels in width and height, and then change all the pixels into a grey color.
Set the pixels into a newly distributed color number.
Return the grey_scale_image.
'''

# Question 2, Make a function that makes a photonegative of the original.
# The red value should be set to 255 - original red, green to 255 - original green
# and the same for the blue value.
def photonegative_of_an_image(image):
    photonegative_image = image.clone()
    for y in range (0, image.getHeight()):
        for x in range (0, image.getWidth()):
            color = image.getPixel(x,y)
            red_color = 255 - color[0]
            green_color = 255 - color[1]
            blue_color = 255 - color[2]
            new_color = [red_color, green_color, blue_color]
            photonegative_image.setPixel(x, y, new_color)
    return photonegative_image
'''
Define a function named photonegative_of_an_scale using image as a parameter.
Copy the original image and name photonegative_image.
Make a loop that goes over all the pixels in width and height, and then change the pixel coordinates (negative colors) according to the changing value of the color .
Set the pixels into a newly distributed color number.
Return the photonegative_image.
'''


# Question 3, Make a function that brightens the original. To do this, multiply each color
# value by 2. Some values * 2 will be larger than the allowed 0-255 range for a color.
# The graphics module sets all values bigger than 255 to 255.
def brighten_image(image):
    brightened_image =image.clone()
    for y in range (0, image.getHeight()):
        for x in range (0, image.getWidth()):
            color = image.getPixel(x,y)
            brightened_color = [min(c * 2, 255) for c in color]
            brightened_image.setPixel(x, y, brightened_color)
    return brightened_image
'''
Define a function brighten_scale using image as a parameter.
Copy the original image and brightened_image
Make a loop that goes over all the pixels in width and height, and then change all the pixels into the brightened colors for each coordinate.
Set the pixels into a newly distributed color number.
Return the brigthened_image
'''


# Question 4,  Make a function that randomly picks a pixel location, finds the color
# at that location, and draws a circle at that location filled with that color onto the
# window. The function should do this finding and drawing process 50000 times.
# This will cover the old image with a artistic style.
# You need to pick an x location from 0 to one less than the image width.
# You need a y location from 0 to one less than the image height.
# Research, using Google, the randrange function in Python and imported at the top of
# this file and use it to pick a random x and a random y location.
# Ask yourself, if you want to repeat the action 50000 times, what kind of loop structure do you need?
#
# An example of drawing a circle to image is
#
#         circle = Circle(Point(x, y), 5) # 5 makes a 5 pixel radius circle
#         circle.setFill(color)
#         circle.setWidth(0) # This gets rid of the circle border
#         circle.draw(win)
#
def color_image_to_pointillist(image, win):
    for i in range(50000):
        x = randrange(0, image.getWidth())
        y = randrange(0, image.getHeight())

        color = image.getPixel(x, y)

        circle = Circle(Point(x, y), 3)
        circle.setFill(color)
        circle.setWidth(0)
        circle.draw(win)

    return
'''
Define a function named color_image_to_pointillist using image and win as parameters.
Make a loop that repeats 50000 times with the position of x and y within the random range of width and height.
THe circle points will be 3 pixel radius with no circle borders.
You don't have to return anything since it will draw the image with circle pixels.
'''


# This function loads the image file and centers it in the window. The image is returned so
# it can be drawn.
def load_image(filename):
    # Load the image
    image = Image(Point(0,0), filename)
    # Center it
    image.move(int(image.getWidth()/2), int(image.getHeight()/2))
    return image
'''
Define a function named load_image using filename as a parameter.
Load the image by bringing the poinr and the filename.
Move the width and heights of the images to center it in the window.
Return the image to draw on top of it.
'''


# This is where the program starts
def main():
    # Load the image first so we know how big to make the window.
    image = load_image("image.png")
    # Setup the window using the image size
    win = GraphWin('Image Art', image.getWidth(), image.getHeight(), autoflush=False)
    win.setBackground('yellow') # This is here to help see if the image is centered.

    # Draw the original image and wait for a mouse click to move to the next step
    image.draw(win)
    win.getMouse()

    # Compute the red portion of the image
    red_image = red_part_of_an_image(image)
    red_image.draw(win)
    win.getMouse()

    # Test Question1, by removing the comments from the next 3 lines
    grey_scale_image = color_image_to_grey_scale(image)
    grey_scale_image.draw(win)
    win.getMouse()

    # Test Question 2,  by removing the comments from the next 3 lines
    photonegative_image = photonegative_of_an_image(image)
    photonegative_image.draw(win)
    win.getMouse()

    # Test Question 3,  by removing the comments from the next 3 lines
    brightened_image = brighten_image(image)
    brightened_image.draw(win)
    win.getMouse()

    # Test Question 4, by removing the next 2 comments
    color_image_to_pointillist(image, win)
    win.getMouse()

    win.close()
'''
Bring the image.png file and set the background color in Yellow.
After, make lines to enable the click to move on to the next functions and pictures.
Call red_image, grey_scale_iamge, photonegative_image, brightened_image, and color_image_to_pointillist to display.
To close the window, click the window once more.
'''


# This is the only code the is not indented, so this is the first line executed.
main()
