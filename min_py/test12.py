n = int(input ("enter number : "))
while n < 1 or n > 9:
    n = int(input ("enter number : "))

i = 0
som = 1
while n > 0:
    som = som * n
    n-=1
print(som)