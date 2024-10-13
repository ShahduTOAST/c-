p= float( input ("Do you like 玩游戏(1(yes) or 0(no))") )
while (p==1):   
    w=float(input("请输入体重：（KG）"))
    h=float(input("请输入身高：（M）"))
    BMI=w/(h*h)
    print("你的BMI是%d"%(BMI))
    if BMI<=18:
        print("加油吃吧，瘦子")
    elif BMI<=24:
        print("话可以，加油")
    elif BMI<=28:
        print("哇，你好胖啊")
    elif BMI>28:
        print("你无敌了，肥宅")
    p=float(input("again? 1(yes)/0(no)"))

if (p==0):
    print("懒蛋")

else:
    print("眼瞎啊，不知道填什么啊")
