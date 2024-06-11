"""
    For COMP1010 University of Utah
    Assignment written by Juhyun Kim (u1432156)
    A3 Turtle Assignment
"""

# Use the turtle module
import turtle

# Create a screen to draw on
window = turtle.Screen()

# A2 a)
# Make a turtle named triangle and use that turtle to draw
# a triangle with one corner at position x = 0 and y = 0
triangle = turtle.Turtle()
triangle.goto(0,0)
triangle.forward(40)
triangle.setheading(120)
triangle.forward(40)
triangle.setheading(240)
triangle.forward(40)

# A2 b)
# Make a turtle named zigzag and use that turtle to draw
# a blue zigzag shape starting at position x = -100 and y = 100.
# See the assignment for an example picture. You must use a
# loop to repeat the pattern for 8 peaks.
# The turtle should not leave any other lines except the zig zag.
zigzag = turtle.Turtle()
zigzag.penup()
zigzag.goto(-100,100)
zigzag.color('blue')
zigzag.pendown()
for i in range(8):
    zigzag.setheading(60)
    zigzag.forward(35)
    zigzag.setheading(300)
    zigzag.forward(35)

# A2 c)
# Make a turtle named spiral and use that turtle to draw
# a green square spiral shape with the center starting at
# position x = 0 and y = -100.
# See the assignment for an example picture.
# You must use a loop to grow the spiral.
# The turtle should not leave any other lines except the spiral.
spiral = turtle.Turtle()
spiral.penup()
spiral.goto(0,-100)
spiral.color('green')
spiral.pendown()
spiral.setheading(90)
def spiral_sqrfunc(size):
    for i in range(4):
        spiral.fd(size)
        spiral.left(90)
        size = size + 5
spiral_sqrfunc(20)
spiral_sqrfunc(40)
spiral_sqrfunc(60)
spiral_sqrfunc(80)
spiral_sqrfunc(100)
spiral_sqrfunc(120)

# A2 d)
# Add a new turtle. Draw a nice picture of your own design.
# There should be different colors and sections that require
# the pen to go back up and back down.

# Create a turtle named turtle
crown = turtle.Turtle()

# Make a condition for drawing lightning and speed up to 5
crown.penup()
crown.goto(-550, -420)
crown.color('yellow')
crown.pendown()
crown.fillcolor('yellow')
crown.speed(5)
crown.begin_fill()
crown.width(60)

# Draw the outline of the lightning shape
crown.begin_fill()
crown.setheading(60)
crown.forward(250)
crown.setheading(290)
crown.forward(100)
crown.setheading(60)
crown.forward(250)
crown.end_fill()


#Draw a crown outilne and fill the shape with light blue
crown.penup()
crown.goto(-500,-300)
crown.color('light blue')
crown.pendown()
crown.fillcolor('light blue')
crown.begin_fill()
crown.width(10)
for i in range(6):
    crown.setheading(-200+(i*30))
    crown.circle(50)
crown.end_fill()

#Draw the crown ornament and fill the shape in red
crown.penup()
crown.goto(-525,-295)
crown.color('red')
crown.pendown()
crown.fillcolor('red')
crown.begin_fill()
crown.circle(12)
crown.end_fill()

# Leave the window up until it is clicked
window.exitonclick()

