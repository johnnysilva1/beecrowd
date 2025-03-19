# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''


total = 0
for _ in range(input()):
	t, v = [int (x) for x in raw_input().split()]
	total += t * v
	
print total
