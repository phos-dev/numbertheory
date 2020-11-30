# Escrever um programa para encontrar a solução única de três congruências usando o Teorema Chinês do Resto. (Lembre-se de verificar se os módulos são coprimos).
# Para rodar este código é necessário ter instalada a ide pycharm.
def gcd(a,b):
	r = 1
	while(r != 0):
		r = a % b
		a = b
		b = r
	return a


def provar(m,a):

	i = 0
	divis = 1
	while(divis != 0):
		i = i + 1
		divis = (m * i - 1) % a
	return i
def provar2(m,a):
	i = 0
	divis = 1
	while(divis != 0):
		i = i + 1
		divis = (m - i) % a
	return i	
	

a = [2,3]
b = [3,5]
c = [2,7]


m = a[1]*b[1]*c[1]

print("M:"+str(m))
m1 = m/a[1]
m2 = m/b[1]
m3 = m/c[1]

print("M1:"+str(m1))
print("M2:"+str(m2))
print("M3:"+str(m3))


print (provar(m1,a[1]))
print (provar(m2,b[1]))
print (provar(m3,c[1]))


solucao = a[0]*m1*provar(m1,a[1])+b[0]*m2*provar(m2,b[1])+c[0]*m3*provar(m3,c[1])


print ("Solucao final:"+str(provar(solucao,m)))
