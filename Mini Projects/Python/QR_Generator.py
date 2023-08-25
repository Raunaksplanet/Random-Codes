import qrcode as qr
from tkinter import *

# img  = qr.make("https://www.youtube.com/@Raunaks_Teaching/videos")
# img.save("new.png")

root = Tk()
root.title("QR Code Genrator")

def Take_input():
    get_data = inputtxt.get("1.0", "end-1c")
    corr = qr.make(get_data)
    corr.save("QR_Code.png")


root.geometry("300x280")
# Width x Height 
root.minsize(300,280)
root.maxsize(300,280)
root.resizable(300,280)

MainText = Label(root, text="QR Code Generator\nBy Raunak Gupta",
                width=23,height=4, borderwidth=1, 
                relief="raised")

inputtxt = Text(root, height=5,
                width=30,
                bg="light grey")

Display = Button(root, height=2,
                 width=20,
                 text="Generate",
                 command=lambda:Take_input())


MainText.grid(row=0, column= 0, pady=((20,20)), padx=((20,20)))
inputtxt.grid(row=1, column= 0, pady=((0,20)), padx=((20,20)))
Display.grid(row=2, column= 0, pady=((0,20)), padx=((20,20)))
root.mainloop()
