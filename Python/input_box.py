from tkinter import *
import tkinter as tk

root = tk.Tk()
root.title("Input Box")

# Tkinter canvas
canvas1 = tk.Canvas(root, width=400, height=300)
canvas1.pack()

# Input box
entry1 = tk.Entry(root)
canvas1.create_window(200, 140, window=entry1)

# App service
root.mainloop()
