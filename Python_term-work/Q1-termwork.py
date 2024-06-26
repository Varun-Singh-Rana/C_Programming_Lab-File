int= 16
float= 94.5
str= "Welcome, to, Python!"
bool= True
list= [1, 2, 3]
dict= {"age": 20}
print(f"Integer:{int}, Type: {type(int)}")
print(f"Floating Point: {float},   Type: {type(float)}")
print(f"String: {str},   Type: {type(str)}")
print(f"Boolean: {bool},   Type: {type(bool)}")
print(f"List: {list},   Type: {type(list)}")
print(f"Dictionary: {dict},   Type: {type(dict)}")

a = 16
b = a
print(f"Identity of a: {id(a)}")
print(f"Identity of b: {id(b)}")
if id(a) == id(b):
    print("a and b point to the same object.")
else:
    print("a and b do not point to the same object.")