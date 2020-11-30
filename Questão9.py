# Escrever um programa para encontrar a solução única de três congruências usando o Teorema Chinês do Resto. (Lembre-se de verificar se os módulos são coprimos).
# Formato input para as congruências('x ≡ a1 mod (b1)', 'x ≡ a2 mod (b2)', 'x ≡ a3 mod (b3)'):
# a1 b1
# a2 b2
# a3 b3
# Para rodar este código é necessário ter instalada a ide pycharm.

def provar(m,a):
	i = 0
	divis = 1
	while(divis != 0):
		i = i + 1
		divis = (m * i - 1) % a
	return i

def provar(m,a):
	i = 0
	divis = 0
	while(divis != 1 and i < a):
		i = i + 1
		divis = (m * (i - 1)) % a
	return i - 1

a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))

m = a[1]*b[1]*c[1]

print("M:"+str(m))
m1 = m/a[1]
m2 = m/b[1]
m3 = m/c[1]

print("M1:"+str(m1))
print("M2:"+str(m2))
print("M3:"+str(m3))


#print (provar(m1,a[1]))
#print (provar(m2,b[1]))
#print (provar(m3,c[1]))



solucao = a[0]*m1*provar(m1,a[1])+b[0]*m2*provar(m2,b[1])+c[0]*m3*provar(m3,c[1])

print ("Solucao final:", solucao % m)
