from tkinter import *

cnumb = "black"
colordesk = "white"

window = Tk()
window.configure(background="white")
window.title("Calculator")

def clicked():
    number =int(txt.get())
    bin_var = Label(window, text=f"Bin: {bin(number)[2:]}")
    bin_var.grid(row=2)

    oct_var = Label(window, text=f"Oct: {oct(number)[2:]}")
    oct_var.grid(row=3)

    hex_var = Label(window, text=f"Hex: {hex(number)[2:]}")
    hex_var.grid(row=4)
    


txt = Entry(window,width=10)  
txt.grid(columnspan=4, ipadx=70) 

But1 = Button(window, text="Convert", fg=cnumb, bg=colordesk, command = clicked, height=1, width=7) 
But1.grid(column=1, row=1)


txt.focus()
window.geometry('400x400')
window.mainloop()

