# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

a=input()

if a % 2 == 0:
	a += 1
	print a
	for _ in range(5):
		a += 2
		print a
else:
	for _ in range(6):
		a += 2
		print a
