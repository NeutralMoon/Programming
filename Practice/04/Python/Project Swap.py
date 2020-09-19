a = int(input("Введите число a: "))
b = int(input("Введите число b: "))
print('a=%d; b=%d' % (a, b))
a, b = b, a
print('a=%d; b=%d' % (a, b))
