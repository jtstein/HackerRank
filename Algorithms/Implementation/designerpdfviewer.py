#!/bin/python
# Jordan Stein
# https://www.hackerrank.com/challenges/designer-pdf-viewer
import sys


h = map(int, raw_input().strip().split(' '))
word = raw_input().strip()

alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
maximum = 0

for x in range(0, len(word)):
    for y in range(0, len(alphabet)):
        if word[x] == alphabet[y]:
            if maximum < h[y]:
                maximum = h[y]

print maximum*len(word)