def read_file(file_path):
    try:
        with open(file_path, 'r') as file:
            lines = file.readlines()
            file_content = ''.join(lines)
            return file_content
    except FileNotFoundError:
        print("File not found!")
        return None

file_path = "about.txt"
file_content = read_file(file_path)
if file_content:
    print("File contents:")
    print(file_content)