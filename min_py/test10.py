
for d in range(1,40):
    print("-",end="-")
print (" ")

for i in range(0,11):
    if (i == 0):
        print ("x * y",end="")
        print("   |",end="")
    elif i == 1:
        print(" ",i ,end=" ")
    else:
        print("    ",i ,end=" ")
        
print (" ")

for d in range(1,40):
    print("-",end="-")
print (" ")


for j in range (1,11):
    if (j == 10):
        print("-",j,end="    |")
    else:
        print("-",j ,end="     |")
    for k in range(1,11):
        som = j * k
        if som > 9:
            print(" ",som,end="   ")
        else:
            print(" ",som,end="    ")
    print(" ")