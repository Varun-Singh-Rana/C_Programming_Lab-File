def operate_list(lst, index):
    try:
        value = lst[index]
        print("Value at index", index, ":", value)
    except IndexError:
        print("Error: Index is out of range.")

if __name__ == "__main__":
    my_list = [1, 2, 3, 4, 5]
    try:
        index = int(input("Enter the index: "))
        operate_list(my_list, index)
    except ValueError:
        print("Error: Please enter a valid integer index.")
