# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

a =[]

for _ in range(5):
	a.append(input())

b = 0
for _ in range(len(a)):
	if a[_] % 2 == 0:
		b += 1
print str(b) + " valores pares"
