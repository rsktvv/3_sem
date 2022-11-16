from tkinter import *

cnumber= "Black"
colordesk = "White"

window = Tk()
window.configure(background="White")
window.title("Calculator")

txt = Entry(window,width=10)  
txt.grid(columnspan=4, ipadx=70) 
txt.insert(0, "0")

btn2 = Button(window, text="+2", fg=cnumber, bg=colordesk, command=lambda:  clicked(1), height=1, width=7) 
btn2.grid(column=2, row=0)
btn3 = Button(window, text="+3", fg=cnumber, bg=colordesk, command=lambda:  clicked(2), height=1, width=7)
btn2.grid(column=2, row=1)
btnm1 = Button(window, text="-1", fg=cnumber, bg=colordesk, command=lambda:  clicked(3), height=1, width=7)
btnm1.grid(column=2, row=2)
btnm2 = Button(window, text="-2", fg=cnumber, bg=colordesk, command=lambda:  clicked(4), height=1, width=7)
btnm2.grid(column=3, row=2)
btnm3 = Button(window, text="-3", fg=cnumber, bg=colordesk, command=lambda:  clicked(5), height=1, width=7) 
btnm3.grid(column=3, row=1)
btnv2 = Button(window, text="*2", fg=cnumber, bg=colordesk, command=lambda:  clicked(6), height=1, width=7) 
btnv2.grid(column=2, row=3)
btnv3 = Button(window, text="*3", fg=cnumber, bg=colordesk, command=lambda:  clicked(7), height=1, width=7) 
btnv3.grid(column=4, row=2)
btnv0 = Button(window, text="=0", fg=cnumber, bg=colordesk, command=lambda:  clicked(8), height=1, width=7) 
btnv0.grid(column=4, row=1)

def clicked(a):  
    hole = int(txt.get())
    txt.delete(0, END) 
    match a:
        case 1:
            hole += 2
            txt.insert(0, str(hole))
    
        case 2:
            hole += 3
            txt.insert(0, str(hole))
            
        case 3:
            hole -= 1
            txt.insert(0, str(hole))
        case 4:
            hole -= 2
            txt.insert(0, str(hole))
        case 5:
            hole -= 3
            txt.insert(0, str(hole))
        case 6:
            hole *= 2
            txt.insert(0, str(hole))
        case 7:
            hole *= 3
            txt.insert(0, str(hole))
        case 8:
            hole *= 0
            txt.delete(0, END)
            txt.insert(0, "0")


txt.focus()
window.geometry('400x400')
window.mainloop()