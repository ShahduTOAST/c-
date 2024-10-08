import turtle
turtle.pensize("10")
turtle.speed(100)
#green
turtle.color("white","#80BA03")
turtle.begin_fill()

number=0 
while number<4:
    number+=1
    turtle.forward(120)
    turtle.left(90)

turtle.end_fill()

#yellow
turtle.color("white","yellow")
turtle.begin_fill()

number=0 
while number<4:
    number+=1
    turtle.forward(120)
    turtle.right(90)

turtle.end_fill()

#blue
turtle.color("white","blue")
turtle.begin_fill()

number=0 
while number<4:
    number+=1
    turtle.right(90)
    turtle.forward(120)
    
turtle.end_fill()

#red
turtle.color("white","red")
turtle.begin_fill()

number=0 
while number<4:
    number+=1
    turtle.left(90)
    turtle.forward(120)
    
turtle.end_fill()

#name
turtle.color("#717171")
turtle.penup()
turtle.goto(-130,-200)
turtle.write("Microsoft",font=("Impact",50,"normal"))
turtle.hideturtle()

