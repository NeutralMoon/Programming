a = int(input("Введите число a: "))
b = int(input("Введите число b: "))
print('a=%d; b=%d' % (a, b))
c = a
a = b
b = c
print('a=%d; b=%d' % (a, b))