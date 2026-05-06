import time

datos = []

for i in range(10):
    num = float(input(f"Ingrese valor {i+1}: "))
    datos.append(num)

inicio = time.time()

suma = sum(datos)
promedio = suma / 10

fin = time.time()

print("Suma:", suma)
print("Promedio:", promedio)
print("Tiempo de cálculo:", fin - inicio, "segundos")