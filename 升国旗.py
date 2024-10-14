import turtle as t                        #电脑录屏频率太低，看起来很卡                      
import time

t1=t.Pen()
t1.speed(0)
t2=t.Pen()
t1.hideturtle()
t2.hideturtle()                             
def flag(x,y):                            #旗帜                          
    t1.penup()
    t1.color("red")
    t1.goto(x,y)
    t1.pendown()
    t1.begin_fill()
    t1.setheading(0)
    t1.forward(200)
    t1.left(90)
    t1.forward(100)
    t1.left(90)
    t1.forward(400)
    t1.left(90)
    t1.forward(200)
    t1.left(90)
    t1.forward(400)
    t1.left(90)
    t1.forward(100)
    t1.left(90)
    t1.end_fill()

def star(x,y,a,b):                          #小星
    t1.penup()
    t1.goto(x,y)
    t1.pendown()
    t1.color("yellow")
    t1.begin_fill()
    t1.setheading(a)
    t1.forward(b)
    t1.right(180-36)
    t1.forward(b)
    t1.right(180-36)
    t1.forward(b)
    t1.right(180-36)
    t1.forward(b)
    t1.right(180-36)
    t1.forward(b)
    t1.end_fill()
    t1.setheading(0)
    t1.penup()
    t1.forward(20)
    t1.pendown()
    

def cn_flag(x,y):                           #五星红旗打包
    flag(x,y)
    star(-105,85+y,60,15)
    star(-90,70+y,30,15)
    star(-90,45+y,0,15)
    star(-105,30+y,-20,15)
    star(-160,70+y,0,59)

    
t2.speed(0)                                 #旗杆
t2.pensize(20)
t2.color("black")
t2.penup()
t2.goto(-205,-500)
t2.pendown()
t2.setheading(90)
t2.forward(900)


i=0
while(1):
    time.sleep(0.1)
    t1.clear()
    t.tracer(0)                          #表示频率
    cn_flag(0+5,0+i*5)                      
    t.tracer(10,1)
    i+=1
    if(i==50):
        break                               #结束循环                                           
    




    
