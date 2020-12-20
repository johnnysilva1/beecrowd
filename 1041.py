# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

x, y =[float (x) for x in raw_input().split()]


if x == 0 and y == 0:
	print "Origem"
elif x == 0 and (y > 0 or y < 0):
	print "Eixo Y"
elif y == 0:
	print "Eixo X"
elif x > 0 and y > 0:
	print "Q1"
elif x > 0 and y < 0:
	print "Q4"
elif x < 0 and y > 0:
	print "Q2"
elif x < 0 and y < 0:
	print "Q3"

