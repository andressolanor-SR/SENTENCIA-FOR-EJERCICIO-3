# Leer el valor de N
N = int(input("Ingrese un número entero positivo: "))

# Inicializar el producto
producto = 1

# Calcular el producto de los números desde 1 hasta N
for i in range(1, N + 1):
    producto = producto * i

# Mostrar el resultado
print("El producto desde 1 hasta", N, "es:", producto)