a = input("输入第一个数字：")
b = input("输入第二个数字：")

a = int(a)
b = int(b)

op = input("请输入运算符：")
# 运算符只能是+-*/

if op == "+":
    ans = a + b
    print("它们的和是：", ans)
elif op == "-": 
    ans = a - b
    print("它们的差是：", ans)
elif op == "*":
    ans = a * b
    print("它们的积是：", ans)
elif op == "/":
    ans = a / b
    print("它们的商是：", ans)
else:
    print("错误：未知运算符！")