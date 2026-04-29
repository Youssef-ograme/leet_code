a = int (input ("enter number 1 : "))
b = int (input ("enter number 2 : "))
op = input ("enter operayter : ")
if op == '/' :
    if b == 0:
        print ("b is 0")
    else :
        som = a // b
        print (som)

elif op == '+' :
    som = a + b

elif op == '-' :
    som = a - b

elif op == '*' :
    som = a * b
print (som)
else:
    print ("in valide operayters : :( \n")

