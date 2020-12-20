# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

def addCaracteres(seq):
	str = ""
	for x in range(32 - len(seq)):
			str += "0"
		
	return (str + seq)

while True:
  try:
	a, b = [int (x) for x in raw_input().split()]
	a = bin(a)[2:]
	b = bin(b)[2:]
	
	if len(a) < 32:
		a = addCaracteres(a)
	if len(b) < 32:
		b = addCaracteres(b)
	
	str=""
	for x in range(32):
		if (a[x] == '0' and b[x] == '0') or (a[x] == '1' and b[x] == '1'):
			str = str + "0"
		else:
			str = str + "1"
		
	#int(fdfdf, 2) converte para binario
	print int(str, 2)
	
  except EOFError:
    break
	

