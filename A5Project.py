"""
*** A5 Advanced Loops Assignment

*** For COMP1010 University of Utah

*** Assignment written by Juhyun Kim, u1432156
"""


# 1) Using a for loop, write a function that adds numbers from -55 to 0 (including -55 ) and return the result.
def add_numbers_55_to_0():
    a=0
    for b in range(-55,0):
        a += b
    return a


# 2) Using a for loop, write a function that adds all multiples  of 5  below 1000 (including 1000) and returns the
# result that is, your  result will be  5 + 10 +  15 + 20 + 25 + ...+ 1000
def add_multiple_of_5_below_1000():
    c=0
    for d in range(5,1001,5):
        c += d
    return c
## Juhyun's comment: As the range number will not add the last number, make the last number to 1001 to include adding 1000 to the range addition


# 3) Using a single accumulator loop,
#  write a function that  concatenate and return even numbers from 0 to 20,
# into a string with a space between each number.
# Your output would be :  0 2 4 6 8 10 12 14 16 18 20
def even_numbers_below_20():
    result = ''
    for e in range(0, 21):
        if e % 2 == 0:
            if result:
                result += ' '
            result += str(e)
            if e==20:
                result += ' '
    return result
## Juhyun's comment: create a string named result and add those according even numbers into result string to print out the even numbers with a space between each number


# 4) write a function that computes and returns a tip amount  based on  a dollar amount of a restaurant bill.
# Assume the tip is 20%  of the total restaurant  bill.  that is  a 20% tip (multiply the given bill  by 0.2) .
# As an example, if  the bill amount is 10.40, the tip should be 2.08
# Do not worry about making the tip amount have 2 decimal places like a dollar amount would.
def tip_calculation(total_bill):
    tip = total_bill * 0.2
    return tip


# 5) write a function that calculate and return the compound interest of a given loan
# that would grow after some specified year based on loan rate percentage.
# for example, if
#   loan amount= 1000.0
#  loan rate percent= 5.0
# length of the loan in years= 5
# Year: 1 Loan Amount: 1050.0
# Year: 2 Loan Amount: 1102.5
# Year: 3 Loan Amount: 1157.625
# Year: 4 Loan Amount: 1215.5062500000001
# Year: 5 Loan Amount: 1276.2815625000003
# Thus your function returns 1276.2815625000003
# The math to compute this is not too bad.  Each year, the updated loan value is:
#   loan amount * (1 + loan rate percent/100.0)
# In other words, If the loan rate is 5%, the math evaluates to
# new loan amount = old loan amount * 1.05.
# Use a for loop over the number of years and compute an updated loan amount each year.
def calculate_compound_interest(loan_amount, rate, duration_in_year):
    for f in range(duration_in_year):
        loan_amount =loan_amount * (1 + rate/100)
    return loan_amount


def main():
    print("Sum of Numbers from -55  to  0  = ", add_numbers_55_to_0())
    print()
    print("Sum of Numbers multiple of  5  below 1000  = ", add_multiple_of_5_below_1000())
    print()
    print("Even numbers below 20  = ", even_numbers_below_20())
    print()

    total_bill_amount = float(input("Please enter total bill amount : "))
    print("20% Bill Amount  = ", tip_calculation(total_bill_amount))
    print()

    loan_amount = float(input(" Please enter total loan amount : "))
    loan_rate = float(input(" Please enter loan rate percent : "))
    loan_period = int(input(" Please enter length of the loan in years : "))
    ## Juhyun's comment: As for loop cannot take float format as a range input, I changed it into integer type to make the code work.

    print(str(loan_period) + " compound interest  = ", calculate_compound_interest(loan_amount, loan_rate,loan_period))

if __name__ == '__main__':
    main()