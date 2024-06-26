def num(prompt):
    while True:
        try:
            num = float(input(prompt))
            return num
        except ValueError:
            print("Error: Please enter a numerical value.")

if __name__ == "__main__":
    try:
        num1 = num("Enter the first number: ")
        num2 = num("Enter the second number: ")
        sum = num1 + num2
        print("Result:", sum)
    except TypeError:
        print("Error: One or both inputs are not numerical.")
