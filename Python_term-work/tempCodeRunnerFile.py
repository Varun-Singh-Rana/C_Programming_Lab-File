import tkinter as tk

def on_button():
    label.config(text="Button is clicked!")

window = tk.Tk()
window.title("Q14_B")
label = tk.Label(window, text="Hello, World!")
label.pack()
button = tk.Button(window, text="Click Me!",command=on_button)
button.pack()
window.geometry("350x150")
window.mainloop()