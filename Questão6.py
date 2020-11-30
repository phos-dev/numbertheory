# Escrever um programa para encontrar os coeficientes s e t da combinação linear mdc(a, b) = s · a + t · b.
# Para rodar este código é necessário ter instalada a ide pycharm.

def mdc_ite(a,b):
    r = a % b
    while (r != 0):
        a = b
        b = r
        r = a % b
        
    return b


a = 14
b = 6
s = (a // b) - (a // b) - (a // b)
t = 1
print("O mdc({:d},{:d}) = {:d}".format(a,b,mdc_ite(a,b)))
print("logo {:d} = {:d} . {:d} + {:d} . {:d}".format(mdc_ite(a,b),s,a,t,b))

print("Então s é igual a {:d} e t é igual a {:d}" .format(s,t))
