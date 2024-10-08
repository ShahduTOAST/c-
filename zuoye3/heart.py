import turtle

pen1=turtle.Pen()
pen1.hideturtle()
pen1.penup()
pen1.pencolor("red")
pen1.goto(-160,200)
pen1.write("心电图",font=("Impact",80,"normal"))



while(1):
    pen1.hideturtle()
    pen2=turtle.Pen()
    pen2.speed(100)
    pen2.pencolor("red")
    pen2.hideturtle()

    pen2.penup()
    pen2.goto(-400,0)
    pen2.pendown()
    pen2.goto(-350,0)
    pen2.goto(-330,50)
    pen2.goto(-300,-120)
    pen2.goto(-280,180)
    pen2.goto(-250,-200)
    pen2.goto(-200,30)
    pen2.goto(-190,0)
    pen2.goto(-100,0)


    pen2.goto(-350+250,0)
    pen2.goto(-330+250,50)
    pen2.goto(-300+250,-120)
    pen2.goto(-280+250,180)
    pen2.goto(-250+250,-200)
    pen2.goto(-200+250,30)
    pen2.goto(-190+250,0)
    pen2.goto(-100+250,0)

    pen2.goto(-350+500,0)
    pen2.goto(-330+500,50)
    pen2.goto(-300+500,-120)
    pen2.goto(-280+500,180)
    pen2.goto(-250+500,-200)
    pen2.goto(-200+500,30)
    pen2.goto(-190+500,0)
    pen2.goto(-100+500,0)
    pen2.penup()
    pen1.hideturtle()

    pen2.clear()




