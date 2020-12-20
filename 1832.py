# -*- coding: utf-8 -*-

'''
Escreva a sua solução aqui
Code your solution here
Escriba su solución aquí
'''

def converte(numero):
		if numero >= 129 and numero <= 137:
			calculo = 97 + (numero - 129)
			#print numero, calculo
			return(chr(calculo))

		if numero >= 145 and numero <= 153:
			calculo = 106 + (numero - 145)
			#print numero, calculo
			return(chr(calculo))

		if numero >= 162 and numero <= 169:
			calculo = 115 + (numero - 162)
			#print numero, calculo
			return(chr(calculo))


	#maiusculas

		if numero >= 193 and numero <= 201:
			numero -= 64
			calculo = 97 + (numero - 129)
			#print numero, calculo
			return(chr(calculo).upper())

		if numero >= 209 and numero <= 217:
			numero -= 64
			calculo = 106 + (numero - 145)
			#print numero, calculo
			return(chr(calculo).upper())

		if numero >= 226 and numero <= 233:
			numero -= 64
			calculo = 115 + (numero - 162)
			#print numero, calculo
			return(chr(calculo).upper())

		if numero == 64:
			return(" ")

		if numero >= 240 and numero <= 249:
			#return("@")
			return(str(numero - 240))



while True:
	try:
		a =[int (x, 8) for x in raw_input().split()]
		linha = []

		for x in range(len(a)):
			linha.append(converte(a[x]))

		print "".join(linha)
	
	except EOFError:
		break	

