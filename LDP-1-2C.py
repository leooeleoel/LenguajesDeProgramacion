import random
import time

sucursales = []
ventas = []

# Generar datos (no se mide esto)
for i in range(25):
    sucursales.append(f"Sucursal {i+1}")
    ventas.append(random.randint(1000, 5000))

inicio = time.time()

promedio = sum(ventas) / 25

fin = time.time()

print("Promedio de ventas:", promedio)

print("\nSucursales con ventas mayores al promedio:")
for i in range(25):
    if ventas[i] > promedio:
        print(sucursales[i], "-", ventas[i])

print("\nTiempo de cálculo:", fin - inicio, "segundos")