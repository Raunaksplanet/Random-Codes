from textblob import TextBlob
from tkinter import *

# obj = TextBlob("heloo")
# print(obj.correct())


root = Tk()
root.title("Spell Checker By Raunak Gupta")

def Take_input():
    get_data = inputtxt.get("1.0", "end-1c")
    corr = TextBlob(get_data)
    data = corr.correct()
    Output.delete("1.0", "end")
    Output.insert("1.0", data)




root.geometry("500x500")
# Width x Height 
root.minsize(500,350)
root.maxsize(500,350)
root.resizable(500,350)

MainText = Label(root, text="Spell checker \nBy Raunak Gupta",
                width=23,height=4, borderwidth=1, 
                relief="raised")

inputtxt = Text(root, height=5,
                width=30,
                bg="light yellow")

Output = Text(root, height=5,
              width=30,
              bg="light cyan")

Display = Button(root, height=2,
                 width=20,
                 text="Show",
                 command=lambda:Take_input())


MainText.pack(pady=((0,20)))
inputtxt.pack(pady=((0,20)))
Display.pack(pady=((0,20)))
Output.pack()
root.mainloop()