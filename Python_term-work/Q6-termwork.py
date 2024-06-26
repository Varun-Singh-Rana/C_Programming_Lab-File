s=input("Enter the string value: ")
vowels=0
digits=0
consonants=0
for i in s:
    if i.isdigit():
        digits+=1
    elif i.isalpha():
        if i in "aeiouAEIOU":
            vowels+=1
        else:
            consonants+=1
d={"Vowels":vowels,"Digits":digits,"Consonants":consonants}
print(d)