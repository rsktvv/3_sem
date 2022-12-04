from random import *
from tkinter import *

size = 600
root = Tk()
canvas = Canvas(root, width=size, height=size)
canvas.pack()


'''def getorigin(eventorigin):
    entry.bind("", self.print_type)
    global x, y
    x = eventorigin.x
    y = eventorigin.y
    print(x,y)'''

#root.bind('<Motion>',getorigin)

'''while True:
    colors =  choice(['aqua', 'blue', 'fuchsia', 'green', 'maroon', 'orange',
                  'pink', 'purple', 'red','yellow', 'violet', 'indigo', 'chartreuse', 'lime'])
    #x0 = randint(0, size)
    #y0 = randint(0, size)
    d = randint(0, size/5)
    #canvas.create_oval(x0, y0, x0+d, y0+d, fill=colors )
    root.update()'''


'''def click():
    global x, y, d
    x = click.x
    y = click.y
    print(x,y)
    d = randint(0, size/5)
    colors = choice(['aqua', 'blue', 'fuchsia', 'green', 'maroon', 'orange',
                     'pink', 'purple', 'red', 'yellow', 'violet', 'indigo', 'chartreuse', 'lime'])'''



#but_1 = Button(canvas.create_oval(x, y, x+d, y+d, fill='colors'))


#but_1.bind('<Button-1>', command=click)
def pom(event):
    x1 = event.x    
    y1 = event.y
    if (x1 > 0 and x1 < 111) and (y1 > 0 and y1 < 24):
        pm.post(event.x_root, event.y_root)


b1.bind("<Button-3>", pom)

root.mainloop()