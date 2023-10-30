L = ["dozen","want","forgot","done","group","balance"
"tongue","shake","putting","unhappy","country","busy"
"private","valley","nodded","milk","hand","plates"
"again","peace","course","sell","badly","individual"
"sound","base","game","character","structure","mighty"
"peace","bet","needs","railroad","our","flight"
"chance","move","grandfather","throughout","poetry","managed"]
n = len(L)
d = dict()
for x in L:
    num = 0
    for z in x:
        num += ord(z)
    h = num % n % n
    if h not in d:
        d[h] = 1
    else:
        d[h] += 1
    print(h)


print(d)