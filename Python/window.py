from tkinter import *
import tkinter as tk

root = Tk()

root.title("Window")
root.geometry("800x500")

# Label
lbl = Label(root, text = "This is window")
lbl.grid()

# App service
root.mainloop()
