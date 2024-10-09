print("=========欢迎来到密室================\n")
p=1
b=1
c=1
#入口
while(p!=0):
    if(p==1):
        print("你前面有个大厅 1-进去 2-不进")
        a=input()
        if(a=="1"):
            b=2
            c=2
            p=2   
        else:
            print("明智的选择")
            p=0
#大厅
    if(p==2):
        print("你现在有三个选择 1-左殿 2-右殿 3-后殿")
        a=input()
        if(a=="1"):
            p=3
        elif(a=="2"):
            p=4
        elif(a=="3"):
            p=5
        else:
            print("你是笨蛋吗，连数字都不会输")
            p=0
#左殿    
    if(p==3):
        print("这里有个宝箱，你要开吗 1-开 2-不开")
        n=input()
        if(n=="1"):
            print("你拿到了一些银币")
            b=1
            p=2
        elif(n=="2"):
            p=2
        else:
            print("你是笨蛋吗，连数字都不会输")
            p=0
#右殿
    if(p==4):
        print("这莫名其妙有个商人，他愿意用金币换钥匙 1-换 2-不换")
        a=input()
        if(c==1 and a=="1"):
            print("你得到了钥匙")
            p=2
        else:
            print("有金币再说吧")
            p=2
#后殿
    if(p==5):
        print("你现在有三个选择 1-巨龙神殿 2-桃园神殿 3-大厅")
        a=input()
        if(a=="1"):
            p=7
        elif(a=="2"):
            p=6
        elif(a=="3"):
            p=2
        else:
            print("你是笨蛋吗，连数字都不会输")
            p=0
#胜利神殿
    if(p==7):
        print("这里有条巨龙守着一堆金币 1-换金币 2-不管")
        a=input()
        if(b==1 and a=="1"):
            print("巨龙：你拿着什么。你：银币，比金币更宝贵。")
            print("巨龙：是吗？你：对，骗你是小狗。")
            c=1
            p=5
        elif(b!=1 and a=="1"):
            p=5
        elif(b!=1 and a=="2"):
            p=5
        else:
            print("你是笨蛋吗，连数字都不会输")
            p=0
#死亡神殿
    if(p==6):
        print("正在桃园神殿 1-进入 2-后退")
        a=input()
        if(c==1 and a=="1"):
            p=8
        elif(c!=1 and a=="1"):
            print("你还没有钥匙")
            p=5
        elif(a=="2"):
            p=5
        else:
            print("你是笨蛋吗，连数字都不会输")
            p=0        
#出口
    if(p==8):
        print("你逃了出来，但突然间你被神秘的力量变成了小狗")
        p=0
    
            

        
