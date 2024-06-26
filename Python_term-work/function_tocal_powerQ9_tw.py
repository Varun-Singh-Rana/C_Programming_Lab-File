def power(base, exp):
    if exp == 0:
        return 1
    else:
        return base * power(base, exp - 1)
if __name__ == "__main__":
    base= 4
    exponent= 3
    print(f"Power of {base}^{exponent} is: ",power(base, exponent))