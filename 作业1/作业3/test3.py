import datetime
p=datetime.datetime.now()
print(p)

print("冤大头超市收银系统\n")

while(1):
    print("请输入品名：\n")
    a=input()
    

    print("请输入数量：\n")
    b=input()
    b=int(b)

    print("请输入单价：\n")
    c=input()
    c=float(c)
    
    xj=c*b
    print("小计为",xj,"\n")

    print("请输入品名：\n")
    e=input()
    

    print("请输入数量：\n")
    f=input()
    f=int(f)

    print("请输入单价：\n")
    j=input()
    j=float(j)
    sm=f*j


    print("小计为",sm,"\n")


    print("实收：\n")
    z=input()
    z=int(z)

    h=xj+sm
    v=z-h
    print("找零",v,"\n")
    print("======================================")
    print("欢迎来到冤大头超市\n")
    print("收银员：007    柜台：008\n")
    print(p)
    print("票号：31415923535897932384")
    print("______________________________________")

    print("品名     数量    单价   小计\n")
    print(a,"\t",b,"\t",c,"\t",xj,"\t")
    print(e,"\t",f,"\t",j,"\t",sm,"\t")
    print("合计金额：",h,"找零：",v)
    print("感谢当冤大头，欢迎下次光临！\n")
    print("======================================")
    
    
    


    

    


