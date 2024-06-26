def count_word_frequency(file_path):
    try:
        with open(file_path, 'r') as file:
            word_frequency = {}
            for line in file:
                words = line.split()
                for word in words:
                    word = word.strip('.,!?"\'').lower()
                    if word:
                        word_frequency[word] = word_frequency.get(word, 0) + 1
            return word_frequency
    except FileNotFoundError:
        print("File not found!")
        return None

file_path = "about.txt"
word_frequency = count_word_frequency(file_path)
if word_frequency:
    print("Word frequency:")
    for word, frequency in word_frequency.items():
        print(f"{word}: {frequency}")
