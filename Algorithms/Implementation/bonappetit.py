# Jordan Stein
# https://www.hackerrank.com/challenges/bon-appetit

# Enter your code here. Read input from STDIN. Print output to STDOUT
nk = map(int, raw_input().split(' '))
costs = map(int,raw_input().split(' '))
charged = int(raw_input())

spent = 0

for x in range(0, nk[0]):
    if nk[1] != x:
        spent += costs[x]

if spent/2 == charged:
    print "Bon Appetit"
else:
    print charged - spent/2