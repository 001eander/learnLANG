from random import randint

num = randint(1, 100)

while True:
    guess = int(input("请输入数字："))
    if num < guess:
        print("太大了")
    elif guess < num:
        print("太小了")
    else:
        print("恭喜你猜对了！")
        break