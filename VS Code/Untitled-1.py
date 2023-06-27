f = [0, 1, 2]
for i in range(3, 101):
    f.append(f[i-1] + f[i-2])

while True:
    try:
        n = int(input().strip())
    except EOFError:
        break

    res = f[2]
    for i in range(2):
        for j in range(2):
            for k in range(2):
                for o in range(2):
                    UP = DOWN = LEFT = RIGHT = n
                    if i == 0:
                        LEFT -= 1
                    else:
                        UP -= 1
                    if j == 0:
                        RIGHT -= 1
                    else:
                        UP -= 1
                    if k == 0:
                        RIGHT -= 1
                    else:
                        DOWN -= 1
                    if o == 0:
                        LEFT -= 1
                    else:
                        DOWN -= 1
                    res += f[UP] * f[DOWN] * f[LEFT] * f[RIGHT]
    print(res)
