from tkinter import *

root = Tk()
# Setting up Default size
# "WidthxHeight"
root.geometry("300x300")
root.minsize(100,100)
root.maxsize(700,700)

# Introduction to Title and Icon
root.title("Raunak Gupta")
root.iconbitmap("new.ico")

#  Text in GUI
var1 = Label(text = "Raunak gupta is a programmer",fg="black", font="bold",padx=50,pady=100)
var1.pack()

# Photo in Gui
# var2 = PhotoImage(file="1.png")
# var3 = Label(image=var2)
# var3.pack()


root.mainloop()