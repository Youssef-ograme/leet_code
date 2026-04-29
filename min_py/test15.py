# from time import sleep
# from os import system
# number = int (input ("enter number : "))
# name = input ("enter your name : ")

# def my_name (name):
#     print ("this my name : ",end="")
#     return name

# def programme (number , name):
#     if number == 5:
#         print(my_name(name))

# programme (number , name)

import time
import sys

def typing_effect(text, speed=0.08):
    for char in text:
        sys.stdout.write(char)
        sys.stdout.flush()
        time.sleep(speed)
    print()

typing_effect("Welcome to my program...")