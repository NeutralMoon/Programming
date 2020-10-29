a = float(input())
n = int(input())
def power(a, n):
    z, c, rez, arr = 0, 1, 0, []
    if n > 1:
        while c < n:
            if n == 2:
                arr.append(a * a)
                rez += arr[z]
            else:
                if c < 2:
                    arr.append(a * a)
                    rez += arr[z]
                else:
                    arr.append(a)
                    rez *= arr[z]
            c += 1
            z += 1
    else:
        rez += a
    return rez


print(power(a, n))
