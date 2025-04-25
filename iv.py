#IV Calculator for Pokemon GO 
# Value range for A/D/S --> 0 - 15.

import math
def rounded(value):
    dec_val = value - int(value)
    first_dec_digit = int(dec_val * 10)
    if 0 <= first_dec_digit <= 4:
        return int(value)
    else:
        return int(value)+1

try:
    A=int(input("\nEnter Attack stat: "))
    D=int(input("\nEnter Defense stat: "))
    S=int(input("\nEnter Stamina stat: "))

    if not all(0 <= stat <= 15 for stat in (A, D, S)):
        print("\nOne or more values are out of range.")
        exit
    else:
        total = A + D + S
        result = total * (20/9)    
        res_rounded = rounded(float(f"{result:.2f}"))
        print(f"\nIV = {res_rounded}%.")
except ValueError:
    print("\nInvalid Input. Program terminated.")
    exit