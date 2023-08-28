from tkinter import *
import tkinter as tk

# Root variable
root = Tk()

# Window Function
root.title("Button")
root.geometry("800x500")

# button click function
def clicked():
    lbl.configure(text = "I just got clicked")
 
# button value
btn = Button(root, text = "Click me" ,
             fg = "red", command=clicked)
# set Button grid
btn.grid(column=3, row=0)

# App service
root.mainloop()
