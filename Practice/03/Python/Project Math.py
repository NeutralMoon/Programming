def sum(a, b):
    return a + b


def sub(a, b):
    return a - b


def mult(a, b):
    return a * b


def div(a, b):
    return a / b


def main():
    global b, a, c
    while True:
        try:
            # Вводим числа
            a = float(input("Введите число a: "))
            b = float(input("Введите число b: "))
            c = int(input("Номер операции:\n1) +\n2) -\n3) *\n4) /\n"))
        except:
            print("Попробуйте ещё раз ...\n")
            continue
        break

    cond = {1: sum(a, b),
            2: sub(a, b),
            3: mult(a, b),
            4: div(a, b)}

    print(cond[c])


if __name__ == "__main__":
    main()

# оператор Python // - деление соответствует оператору / - деление языка С++
