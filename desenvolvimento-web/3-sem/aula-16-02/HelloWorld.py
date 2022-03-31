# Desenvolvimento WEB III -> Aula do dia 16/02:

# Framework Django;
# Linguagem Phyton;

nome = input("Digite seu nome ")
print("Oi " + nome)
idade = input ("Digite sua idade ")
print("Idade " + idade)

idade = 18
# Modo de fazer um if em python
if idade > 18:
    print("Pode entrar")
else :
    print("Não pode entrar")

# Modo de fazer um for em python
nome = "Fatec Araras"

for letra in nome: 
    print(letra)
    print(letra.upper())
    print("==============")

numero = 0
for numero in range(10):
    print(numero + 1)

#------------------------------

registro = ('Orlando', 'Saraiva', 'Professor', 'Fatec Araras')

for letra in registro:
    if letra[0:1] == 'F':
        print (letra)

for elemento in registro:
    if elemento.startswith('F'):
        print(elemento)

# A POHA DO PYTHON TEM IDENTAÇÃO FORTE.... OU SEJA O CODIGO DEPENDE DA IDENTAÇÃO.