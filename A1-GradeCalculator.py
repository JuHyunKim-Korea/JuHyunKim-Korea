first_name = input('Enter your name: ')
activity = int(input('Enter your class and lab activity score: '))
quiz = int(input('Enter your quiz score: '))
assignment = int(input('Enter your programming assignment score: '))
midterm = int(input('Enter your midterm score: '))
final = int(input('Enter your final exam score: '))

total = ( 10 * activity + 10 * quiz + 40 * assignment + 20 * midterm + 20 * final) / 100

print(first_name + ', your final score for comp1010 is ' + str(total) + '.')