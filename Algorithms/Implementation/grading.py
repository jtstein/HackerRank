#!/bin/python
# Jordan Stein
# https://www.hackerrank.com/challenges/grading

import sys

def solve(grades):
    # Complete this function
    for x in range(0,len(grades)):
        if grades[x] < 38:
            continue
        dif = grades[x]
        while dif % 5 != 0:
            dif += 1
        if dif - grades[x] < 3:
            grades[x] += dif - grades[x]
    return grades
        

n = int(raw_input().strip())
grades = []
grades_i = 0
for grades_i in xrange(n):
    grades_t = int(raw_input().strip())
    grades.append(grades_t)
result = solve(grades)
print "\n".join(map(str, result))
