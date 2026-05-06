import random
import time

inicio = time.time()

pares = 0
impares = 0

for _ in range(500):
    num = random.randint(50, 100)
    
    if num % 2 == 0:
        pares += 1
    else:
        impares += 1

fin = time.time()

print("Pares:", pares)
print("Impares:", impares)
print("Tiempo de cálculo:", fin - inicio, "segundos")