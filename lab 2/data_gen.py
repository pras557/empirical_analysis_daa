import random

x = list()
for i in range(1000):
    x.append(random.randint(0, 1000))
y = sorted(x)
# print(x)
print(y)
