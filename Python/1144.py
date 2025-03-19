# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

N = input()
controle = 0
_ = 1

while (_ <= N):
	if controle == 0:
		print _, (_ ** 2), (_ ** 3)
		controle += 1
	else:
		print (_), ((_ ** 2) + 1), ((_ ** 3) + 1)
		controle = 0
		_ += 1

