# Calculator With only GUI
from tkinter import *

root = Tk()

root.title("Calculator")
root.geometry("260x370")

root.configure(background="grey")
result = Label(root, text = 0,bg="grey", fg="black")
result.grid(column=0,row=0, pady=((40,40)))
result.config(font=("arial",30, "bold"))

# First row 
btn7 = Button(root, text=7, bg="#219ebc",fg="black",width=5,height=2)
btn7.grid(column=0,row=1)
btn7.config(font=("bold", 14))

btn8 = Button(root, text=8, bg="#219ebc",fg="black",width=5,height=2)
btn8.grid(column=1,row=1)
btn8.config(font=("bold", 14))

btn9 = Button(root, text=9, bg="#219ebc",fg="black",width=5,height=2)
btn9.grid(column=2,row=1)
btn9.config(font=("bold", 14))

btn_add = Button(root, text= "+", bg="#219ebc",fg="black",width=5,height=2)
btn_add.grid(column=3,row=1)
btn_add.config(font=("bold", 14))

# Second Row
btn4 = Button(root, text=4, bg="#219ebc",fg="black",width=5,height=2)
btn4.grid(column=0,row=2)
btn4.config(font=("bold", 14))

btn5 = Button(root, text=5, bg="#219ebc",fg="black",width=5,height=2)
btn5.grid(column=1,row=2)
btn5.config(font=("bold", 14))

btn6 = Button(root, text=6, bg="#219ebc",fg="black",width=5,height=2)
btn6.grid(column=2,row=2)
btn6.config(font=("bold", 14))

btn_sub = Button(root, text= "-", bg="#219ebc",fg="black",width=5,height=2)
btn_sub.grid(column=3,row=2)
btn_sub.config(font=("bold", 14))

# Third Row
btn1 = Button(root, text=1, bg="#219ebc",fg="black",width=5,height=2)
btn1.grid(column=0,row=3)
btn1.config(font=("bold", 14))

btn2 = Button(root, text=2, bg="#219ebc",fg="black",width=5,height=2)
btn2.grid(column=1,row=3)
btn2.config(font=("bold", 14))

btn3 = Button(root, text=3, bg="#219ebc",fg="black",width=5,height=2)
btn3.grid(column=2,row=3)
btn3.config(font=("bold", 14))

btn_mult = Button(root, text= "*", bg="#219ebc",fg="black",width=5,height=2)
btn_mult.grid(column=3,row=3)
btn_mult.config(font=("bold", 14))

# Fourth Row
clear = Button(root, text="C", bg="#219ebc",fg="black",width=5,height=2)
clear.grid(column=0,row=4)
clear.config(font=("bold", 14))

btn0 = Button(root, text=0, bg="#219ebc",fg="black",width=5,height=2)
btn0.grid(column=1,row=4)
btn0.config(font=("bold", 14))

btn_equal = Button(root, text="=", bg="#219ebc",fg="black",width=5,height=2)
btn_equal.grid(column=2,row=4)
btn_equal.config(font=("bold", 14))

btn_divide = Button(root, text= "/", bg="#219ebc",fg="black",width=5,height=2)
btn_divide.grid(column=3,row=4)
btn_divide.config(font=("bold", 14))


root.mainloop()